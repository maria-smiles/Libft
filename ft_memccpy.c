#include "libft.h"

void	*ft_memccpy (void *destination, const void *source, int c, size_t n)
{
	unsigned char	*ptr_c_find;
	unsigned int	num;

	ptr_c_find = ft_memchr(source, c, n);
	if (*ptr_c_find == '\0')
		return ((void *)ptr_c_find);
	else
	{
		num = ptr_c_find - (unsigned char *)source + 1;
		destination = ft_memcpy(destination, source, num);
	}
	return ((unsigned char *)destination + num);
}
