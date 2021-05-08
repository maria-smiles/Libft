#include "libft.h"

static int	ft_chrfind(char s, char const *set)
{
	int	res;
	int i;

	i = 0;
	res = 0;
	while (set[i] != '\0')
	{
		if (s == set[i])
			res = 1;
		i++;
	}
	return (res);
}

static char	*ft_makestr(char *newstr, const char *p_beg, const char *p_end)
{
	int	i;

	i = 0;
	while (p_beg <= p_end)
	{
		newstr[i] = *p_beg;
		i++;
		p_beg++;
	}
	newstr[i] = '\0';
	return (newstr);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	unsigned int	len;
	char			*p_beg;
	char			*p_end;
	unsigned int	i;
	char			*newstr;

	i = 0;
	len = ft_strlen(s1);
	if (len == 0)
		return (s1);
	while (ft_chrfind(s1[i], set))
		i++;
	if (i == (size_t) ft_strlen(s1))
	{
		newstr = malloc(sizeof(s1) * (2));
		newstr = "";
		return (newstr);
	}
	p_beg = (char *) &s1[i];
	i = 0;
	while (ft_chrfind(s1[len - i - 1], set))
		i++;
	p_end = (char *) &s1[len - i - 1];
	newstr = malloc(sizeof(s1) * (p_end - p_beg + 2));
	newstr = ft_makestr(newstr, p_beg, p_end);
	return (newstr);
}
