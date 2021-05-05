#include "libft.h"

char	*ft_strnstr (const char *big, const char *little, size_t len)
{
	size_t	i;
	int		result;
	size_t big_len;
	size_t end;
	size_t lit_len;

	big_len = ft_strlen(big);
	if (big_len < len)
		len = big_len;
	end = len;
	lit_len = ft_strlen(little);
	i = 0;
	if (*little == '\0')
		return ((char *)big);
	else
	{
		while (i < len)
		{
			if (big[i] == little[0])
			{
				if (end < lit_len)
					break ;
				result = ft_strncmp(&big[i], little, lit_len);
				if (result == 0)
					return ((char *) &big[i]);
				else
				{
					i++;
					end--;
					continue;
				}
			}
			else
			{
				i++;
				end--;
			}
		}
	}
	return (0);
}
