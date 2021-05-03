#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (dst[i] != '\0')
	{
		i++;
	}
	len = i;
	while ((src[i - len] != '\0'))
	{
		if (i < dstsize)
		{
			dst[i] = src[i - len];
			i++;
		}
		else
			break ;
	}
	return (ft_strlen(src) + dstsize);
}
