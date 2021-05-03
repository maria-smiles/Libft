#include "libft.h"

void	*ft_memmove (void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;
	short			dif;

	dest = destination;
	src = (unsigned char *) source;
	if (src >= dest)
		dif = 1;
	else
	{
		dest = dest + (n - 1);
		src = src + (n - 1);
		dif = -1;
	}
	while (n > 0)
	{
		*dest = *src;
		dest += dif;
		src += dif;
		n--;
	}
	return (destination);
}
