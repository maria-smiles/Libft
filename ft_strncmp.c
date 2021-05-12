#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	cstr1;
	unsigned char	cstr2;

	i = 0;
	while (i < n)
	{
		if (str1[i] < 0)
			cstr1 = str1[i] + 256;
		else
			cstr1 = str1[i];
		if (str2[i] < 0)
			cstr2 = str2[i] + 256;
		else
			cstr2 = str2[i];
		if (cstr1 == cstr2 && cstr1 != '\0' && cstr2 != '\0')
			i++;
		else
			return (cstr1 - cstr2);
	}
	return (0);
}
