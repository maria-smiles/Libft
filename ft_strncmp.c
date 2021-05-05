#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	unsigned char cstr1;
	unsigned char cstr2;

	i = 0;
	while (i < n)
	{
		cstr1 = str1[i];
		if (cstr1 < 0)
			cstr1 += 256;
		cstr2 = str2[i];
		if (cstr2 < 0)
			cstr2 += 256;
		if (cstr1 == cstr2)
			i++;
		else
			return (cstr1 - cstr2);
	}
	return (0);
}
