#include "libft.h"

char	*ft_strchr(const char *str, int c)
{	
	int	len;
	int	i;

	len = ft_strlen(str);
	i = 0;
	if (c == '\0' || len == 1)
		return (0);
	while (i < len)
	{
		if (str[i] == c)
			return ((char *) &str[i]);
		i++;
	}
	return (0);
}
