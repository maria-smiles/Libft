#include <stdlib.h>

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len;

	i = 0;
	if (dstsize != 0)
	{
		if (dst != "\0")
		{
			while (dst[i] != '\0')
				i++;
		}
		if (i > dstsize)
			len = dstsize;
		else
			len = i;
		while ((src[i - len] != '\0'))
		{
			if (i < dstsize - 1)
			{
				dst[i] = src[i - len];
				i++;
			} else
				break;
		}
		dst[i] = '\0';
	}
	else
		len = i;
	return (len + ft_strlen(src));
}