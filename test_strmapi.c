#include <stdlib.h>
#include <unistd.h>
#include <string.h>

#include "ft_strmapi.c"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static char		mapi(unsigned int i, char c)
{
	static int indexArray[11] = {0};

	if (i > 10 || indexArray[i] == 1)
		write(1, "wrong index\n", 12);
	else
		indexArray[i] = 1;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	else if (c >= 'A' && c <= 'Z')
		return (c + 32);
	else
		return (c);
}

static	char	foo(unsigned int i, char c)
{
	int j;
	j = i;
	return c;
}

int				main()
{
	char	*str;
	char	*strmapi;

	str = (char *)malloc(sizeof(*str) * 12);

	{
		strcpy(str, "LoReM iPsUm");
		if (!(strmapi = ft_strmapi(str, &mapi)))
			ft_print_result("NULL");
		else
		{
			ft_print_result(strmapi);
			if (strmapi[11] != '\0')
				ft_print_result("\nString is not null terminated");
			if (strmapi == str)
				ft_print_result("\nA new string was not returned");
			else
				free(strmapi);
		}
	}
	free(str);

	ft_print_result("\n2\n");
	char *ffos = "1IHJfeCX3vSFy5K";
	char *ffor;

	if (!(ffor = ft_strmapi(ffos, &foo)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(ffor);
		if (ft_strncmp(ffor, ffos, sizeof(ffos)) != 0)
			ft_print_result("\nString not equals!");

		if (ffor == ffos)
			ft_print_result("\nA new string was not returned");
		else
			free(ffor);
	}

	return (0);
}