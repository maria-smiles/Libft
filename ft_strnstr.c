#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	int		result;
	char	*ptr_return;

	ptr_return = (char *) '\0';
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	else
	{
		while (i < len)
		{
			if (big[i] == little[0])
			{
				result = ft_strncmp(&big[i], little, len - i);
				if (result == 0)
					ptr_return = (char *) &big[i];
			}
			else
				i++;
		}
	}
	return (ptr_return);
}
