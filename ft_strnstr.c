#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	lit_len;
//	size_t	big_len;
//	size_t	lim;
//	size_t	ilim;
//
	i = 0;
	if (!big || !little)
		return (NULL);
	if ((!*little) || (big == little && big[0] == '\0'))
		return ((char *)big);
	if ((len == 0 && big[0] != '\0') || (little[0] != '\0' && big[0] == '\0'))
		return (0);
	lit_len = ft_strlen(little);
//	big_len = ft_strlen(big);
//	if ((len <= big_len && big_len <= lit_len) || (len <= lit_len && lit_len <=
//	big_len))
//	{
//		lim = len;
//		ilim = 1;
//	}
//	else if ((big_len < lit_len && lit_len < len) || (big_len < len && len <
//	lit_len))
//	{
//		lim = big_len;
//		ilim = 1;
//	}
//	else if (lit_len < big_len && big_len < len)
//	{
//		lim = lit_len;
//		ilim = big_len - lit_len + 1;
//	}
//	else //lit_len < big_len && len < big_len
//	{
//		lim = len - lit_len + 1;
//		ilim = lim;
//	}
//	while (i < ilim)
//	{
//		if (big[0] == little[0] && ((ft_strncmp(big, little, lim)) == 0))
//			return ((char *) big);
//		big++;
//		i++;
//	}

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
