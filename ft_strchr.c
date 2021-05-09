#include "libft.h"

char	*ft_strchr(const char *str, int c)
{	
	size_t	len;
	size_t	i;

	len = ft_strlen(str);
	i = 0;
	while (i <= len)
	{
		if (str[i] == (char) c)
			return ((char *) &str[i]);
		i++;
	}
	return (0);
}
