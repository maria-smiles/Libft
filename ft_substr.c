#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	lens;

	i = 0;
	lens = ft_strlen(s);
	if (start >= lens)
		return (NULL);
	if (lens - start < len)
		len = lens - start;
	substr = malloc(sizeof(char) * (len + 1));
	if(!substr)
		return (NULL);
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
