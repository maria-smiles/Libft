#include "libft.h"

void	*ft_memcpy (void *destination, const void *source, size_t n)
{
	unsigned char	*dest;
	unsigned char	*src;

	dest = destination;
	src = (unsigned char *)source;
	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (destination);
}
