#include "libft.h"

void	*ft_memset (void *destination, int c, size_t n)
{
	unsigned char	*dest;

	dest = destination;
	while (n > 0)
	{
		*dest = (char) c;
		dest++;
		n--;
	}
	return (destination);
}
