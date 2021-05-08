#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t lensrc;

	lensrc = ft_strlen(src);
	if (lensrc == 0)
	{
		dst[0] = '\0';
		return (0);
	}
	if (dstsize != 0)
	{
		i = 0;
		while ((i < dstsize - 1) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (lensrc);
}
