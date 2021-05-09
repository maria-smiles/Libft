#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lit_len;

	i = 0;
	lit_len = ft_strlen(little);
	if (lit_len == 0)
		return ((char *)big);
	if (lit_len > len)
		lit_len = len;
	while (i < len - lit_len)
	{
		if (big[0] == little[0] && !(ft_strncmp(&big[0], little, lit_len)))
			return ((char *) big);
		big++;
		i++;
	}
	return (0);
}
