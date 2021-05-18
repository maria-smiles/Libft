#include "libft.h"
#include <stdio.h>

static size_t	ft_len(size_t lens, unsigned int start, size_t len)
{
	if (lens - start < len)
		len = lens - start;
	return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		len = 0;
	len = ft_len(ft_strlen(s), start, len);
	substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < len)
	{
		if ((s[start + i]) != '\0')
		{
			substr[i] = s[start + i];
			i++;
		}
		else
			break ;
	}
	substr[i] = '\0';
	return (substr);
}
