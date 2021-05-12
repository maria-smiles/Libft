#include "libft.h"

void	*ft_memcpy (void *dst, const void *src, size_t n)
{
	char		*dst1;
	const char	*src1;
	size_t		i;

	if( dst == NULL || dst == src)
		return (dst);
	dst1 = dst;
	src1 = src;
	i = 0;
	while (i < n)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
