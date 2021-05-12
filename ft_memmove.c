#include "libft.h"

void	*ft_memmove (void *dst, const void *src, size_t n)
{
	short		dif;
	char		*dst1;
	const char	*src1;
	size_t i;

	if( dst == NULL || dst == src)
		return (dst);
	dst1 = dst;
	src1 = src;
	i = 0;
	if (src1 >= dst1)
		dif = 1;
	else
	{
		dst1 = dst1 + (n - 1);
		src1 = src1 + (n - 1);
		dif = -1;
	}
	while (n != 0)
	{
		dst1[i] = src1[i];
		i+=dif;
		n--;
	}
	return (dst);
}
