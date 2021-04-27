#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(dst);
	while (dst[i] != '\0')
	{
		i++;
	}
	while ((i < dstsize) && (src[i - len] != '\0'))
	{
		dst[i] = src[i - len];
		i++;
	}
	dst[i] = '\0';
	return (i);
}
