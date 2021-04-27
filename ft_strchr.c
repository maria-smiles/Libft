#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*c_in_str;

	c_in_str = (char *)str;
	while (*c_in_str != c)
	{
		c_in_str++;
	}
	return (c_in_str);
}
