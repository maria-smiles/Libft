#include "libft.h"

void	*ft_memchr (const void *arr, int c, size_t n)
{
	const unsigned char	*ar;
	size_t				i;
	unsigned char		*ptr_return;

	ar = arr;
	ptr_return = NULL;
	i = 0;
	while (i < n)
	{
		if ((unsigned char) ar[i] == (unsigned char) c)
		{
			ptr_return = (unsigned char *) &ar[i];
			return (ptr_return);
		}
		i++;
	}
	return (ptr_return);
}
