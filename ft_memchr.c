#include "libft.h"

void	*ft_memchr (const void *arr, int c, size_t n)
{
	unsigned char	*num;
	unsigned char	*ar;
	size_t			i;
	int				result;
	char			*ptr_return;

	ar = (unsigned char *) arr;
	num = (unsigned char *) &c;
	ptr_return = (char *) '\0';
	i = 0;
	while (i < n)
	{
		if (ar[i] == num[0])
		{
			result = ft_memcmp(&arr[i], num, 4);
			if (result == 0)
				ptr_return = (char *) &arr[i];
		}
		else
			i++;
	}
	return (ptr_return);
}
