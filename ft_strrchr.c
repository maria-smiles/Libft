#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	last_i;
	const char *ptr;

	last_i = ft_strlen(str);
	ptr = &str[last_i];
	while (ptr >= str)
    {
        if(*ptr == (char) c)
            return ((char *) ptr);
        ptr--;
    }
    return (0);
}
