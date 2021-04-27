#include "libft.h"

void	*ft_memset (void *destination, int c, size_t n)
{
	unsigned char	*byteC;
	unsigned char	*dest;

	dest = destination;
	byteC = (unsigned char *) &c;
	while (n > 0)
	{
		*dest = byteC[3];
		dest++;
		n--;
	}
	return (destination);
}
