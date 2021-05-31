//
// Created by Leann Alaskan on 5/25/21.
//
#include "get_next_line.h"
#include <stdio.h>
char **ft_copy_n_char(char **line, char *buf, int i);
char *ft_new_size(char *str1, char *str2);

int	read_from_fd(int fd, char *buf)
{
	int		rs;

	rs = 0;
	if ((rs = read(fd, buf, BUFFER_SIZE)) != -1)
		buf[rs] = '\0';
	else
		return (-1);
	return (1);
}

int get_next_line(int fd, char **line)
{
	char	*buf;
	int		i;
	int		rs;

	i = 0;
	printf("BUFFER_SIZE = %d\n", BUFFER_SIZE);
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if (!buf)
		return (-1);
	ft_memset(buf, '\0', BUFFER_SIZE);
	rs = read(fd, buf, BUFFER_SIZE);
	if (rs > 0)
	{
		//find \n
		while (i < rs)
		{
			while (buf[i] != '\n')
			{
				printf("buf[%d] = %c\n", i, buf[i]);
				i++;
			}
			if (i < rs)
			{
				line = ft_copy_n_char(line, buf, i);
				buf = ft_new_size(buf, buf + i);
			}
			else
			{
				line = ft_copy_n_char(line, buf, i);
				free(buf);
			}
			rs = rs - i;
			i = 0;
		}
		return(1);
	}
	else
		return (-1);
}

char **ft_copy_n_char(char **line, char *buf, int i)
{
	static char *liner;
	char *bufr;

	bufr = ft_strdup(buf);
	bufr[i] = '\0';
	if (**line)
		liner = malloc(sizeof(char) * (ft_strlen(*line) + i));
	else
		liner = malloc(sizeof(char) * i);
	liner = ft_strjoin(*line, bufr);
	free(bufr);
	free(line);
	return (&liner);
}

char *ft_new_size(char *str1, char *str2)
{
	char *copy;
	size_t i;

	i = 0;
	copy = malloc(sizeof(char) * (ft_strlen(str2) + 1));
	while(str2[i])
	{
		copy[i] = str2[i];
		i++;
	}
	free (str1);
	str1 = copy;
	free (copy);
	return (str1);
}
