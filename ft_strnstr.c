#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	lit_len;
	size_t	big_len;

	i = 0;
	if (!big || !little)
		return (NULL);
	if ((!*little) || (big == little && big[0] == '\0'))
		return ((char *)big);
	if ((len == 0 && big[0] != '\0') || (little[0] != '\0' && big[0] == '\0'))
		return (0);
	lit_len = ft_strlen(little);
	big_len = ft_strlen(big);
	if (lit_len > len)
		lit_len = len;
	while (i < big_len)
	{
		if (big[0] == little[0] && !(ft_strncmp(big, little, lit_len)))
			return ((char *) big);
		big++;
		i++;
	}
	return (NULL);
}
