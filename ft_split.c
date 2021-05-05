#include "libft.h"

static int	ft_count(const char *s, char c, int i)
{
	int	count;

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

void	ft_free(char **dst, int j)
{
	while (j >= 0)
	{
		free(dst[j]);
		j--;
	}
	free(dst);
}

static int	ft_putarr(char **dst, int j, int num, char *begin, int i)
{
	int	k;

	k = 0;
	dst[j] = malloc(sizeof(char) * (num + 1));
	if (!dst[j])
		ft_free(dst, j);
	while (k < num)
	{
		dst[j][k] = begin[i - num + k];
		k++;
	}
	dst[j][k] = '\0';
	return (j += 1);
}

static void	ft_setstr(char *begin, char c, char **dst)
{
	int	j;
	int	num;
	int	i;
	size_t len;

	len = ft_strlen(begin);
	num = 0;
	i = 0;
	j = 0;
	while (i < len)
	{
		if (begin[i+1] == '\0' && begin[i] != c)
		{
			j = ft_putarr(dst, j, num, begin, i);
			num = 0;
		}
		else if (begin[i] != c)
			num++;
		else if (begin[i] == c && begin[i - 1] != c)
		{
			j = ft_putarr(dst, j, num, begin, i);
			num = 0;
		}
		else if (begin[i] == c && begin[i - 1] == c)
		{
			i++;
			continue ;
		}

		i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	*begin;
	int		i;
	int		count;
	char	**dst;

	i = 0;
	while (s[i] == c)
		i++;
	if (s[i] != '\0')
		begin = (char *) &s[i];
	else
		return (NULL);
	count = ft_count(s, c, i);
	dst = malloc(sizeof(char *) * (count + 1));
	ft_setstr(begin, c, dst);
	dst[count] = NULL;
	return (dst);
}
