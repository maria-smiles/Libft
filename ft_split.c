#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((s[i] != c) && (i == 0 || (s[i - 1] == c)))
		{
			count += 1;
			i++;
		}
		else
			i++;
	}
	return (count);
}

static void	ft_free(char **dst, int j)
{
	while (j > 0)
	{
		j--;
		free(dst[j]);
	}
	free(dst);
}

static int	ft_putarr(char **dst, int j, int num, const char *begin)
{
	dst[j] = malloc(sizeof(char) * (num + 1));
	if (!dst[j])
	{
		ft_free(dst, j);
		return (0);
	}
	dst[j][num] = '\0';
	num -= 1;
	while (0 <= num)
	{
		begin--;
		dst[j][num] = *begin;
		num--;
	}
	return (j + 1);
}

static int	ft_setstr(const char *s, char c, char **dst)
{
	int		j;
	int		num;
	size_t	i;
	size_t	len;

	num = 0;
	i = 0;
	j = 0;
	len = ft_strlen(s);
	while (i <= len)
	{
		if (i == 0)
			num++;
		else if ((s[i] == '\0' || s[i] == c) && s[i - 1] != c)
		{
			j = ft_putarr(dst, j, num, &s[i]);
			if (j == 0)
				return (0);
			num = 0;
		}
		else if (s[i] != c)
			num++;
		i++;
	}
	return (1);
}

char	**ft_split(char const *s, char c)
{
	int		count;
	char	**dst;

	dst = malloc(sizeof(char *));
	if (!dst)
		return ((char **) NULL);
	dst[0] = NULL;
	if (!s || *s == 0)
		return (dst);
	while (*s == c)
		s++;
	if (*s == 0)
		return (dst);		//можно  if count == 0
	count = ft_count(s, c);
	ft_free(dst, 0);
	dst = malloc(sizeof(char *) * (count + 1));
	if (!dst)
		return ((char **) NULL);
	if (!ft_setstr(s, c, dst))
		return (NULL);
	dst[count] = NULL;
	return (dst);
}
