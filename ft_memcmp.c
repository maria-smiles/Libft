#include "libft.h"

int	ft_chrcmp(char str1, char str2)
{
	unsigned char	cstr1;
	unsigned char	cstr2;

		if (str1 < -127)
			cstr1 = str1 + 256;
		else
			cstr1 = str1;
		if (str2 < -127)
			cstr2 = str2 + 256;
		else
			cstr2 = str2;

		return (cstr1 - cstr2);
}

int	ft_memcmp (const void *arr1, const void *arr2, size_t n)
{
	size_t	i;
	char	*ar1;
	char	*ar2;
	int		dif;

	ar1 = (char *) arr1;
	ar2 = (char *) arr2;
	if (n == 0 || arr1 == arr2 || arr1 == NULL || arr2 == NULL)
		return (0);
	i = 0;
	while (i < n)
	{
		dif = ft_chrcmp(ar1[i], ar2[i]);
			if (dif == 0)
				i++;
			else
				return (dif);
	}
	return (0);
}
