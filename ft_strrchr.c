#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	last_i;
	char	*c_in_str;

	last_i = ft_strlen(str) - 1;
	c_in_str = (char *) &str[last_i];
	while (*c_in_str != c)
	{
		c_in_str--;
	}
	return (c_in_str);
}
