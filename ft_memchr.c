#include "libft.h"

void	*ft_memchr (const void *arr, int c, size_t n)
{
	unsigned char	*ar;
	size_t			i;
	char			*ptr_return;

	ar = (unsigned char *) arr;
	ptr_return = NULL;
	i = 0;
	while (i < n)
	{
		if ((char) ar[i] == (char) c)
		{
			ptr_return = (char *) &ar[i];
			return (ptr_return);
		}
		i++;
	}
	return (ptr_return);
}
