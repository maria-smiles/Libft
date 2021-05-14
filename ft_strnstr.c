#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lit_len;

	i = 0;
	if (!big)
		return (NULL);
	if (!little)
		return ((char *)big);
	if (!(ft_strncmp(little, "", 1)))
		return ((char *)big);
	lit_len = ft_strlen(little);
	if (big == little && len == 0)
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
