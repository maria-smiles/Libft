#include <stddef.h>

int	memcmp (const void *arr1, const void *arr2, size_t n)
{
	size_t			i;
	unsigned char	*ar1;
	unsigned char	*ar2;

	ar1 = (unsigned char *) arr1;
	ar2 = (unsigned char *) arr2;
	i = 0;
	while ((i < n) || ((ar1[i] != '\0') || (ar2[i] != '\0')))
	{
		if (ar1[i] - ar2[i] == 0)
			i++;
		else
			return (ar1[i] - ar2[i]);
	}
	return (0);
}
