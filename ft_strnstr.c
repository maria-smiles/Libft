#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lit_len;

	i = 0;
	if (!big || !little)
		return (NULL);
	if ((!*little) || (big == little && big[0] == '\0'))
		return ((char *)big);
	if ((len == 0 && big[0] != '\0') || (little[0] != '\0' && big[0] == '\0'))
		return (0);
	lit_len = ft_strlen(little);
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while (big[i + j] != '\0' && little[j] != '\0' \
				&& big[i + j] == little[j] && i + j < len)
			j++;
		if (j == lit_len)
			return ((char *) big + i);
		i++;
	}
	return (NULL);
}
