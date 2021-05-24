#include "libft.h"

static char *ft_newstr(char	*new_s, char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	i = 0;
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	new_s = malloc(sizeof(char) * (len_s1 + len_s2 + 1));
	if (!new_s)
		return (NULL);
	while (i < len_s1)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (i < (len_s1 + len_s2))
	{
		new_s[i] = s2[i - len_s1];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;

	if (!s1 || !s2)
		return (0);
	new_s = NULL;
	new_s = ft_newstr(new_s, s1, s2);
	return (new_s);
}
