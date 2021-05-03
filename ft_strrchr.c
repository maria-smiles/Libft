#include "libft.h"
#include <stdio.h>
char	*ft_strrchr(const char *str, int c)
{
	long long int	last_i;

	last_i = ft_strlen(str);
	while (last_i >= 0)
    {
        if(str[last_i] == (char) c)
            return ((char *) &str[last_i]);
        last_i--;
    }
    return (0);
}
