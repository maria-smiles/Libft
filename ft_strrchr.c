#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	last_i;
	char	*c_in_str;

	last_i = ft_strlen(str);
	c_in_str = (char *) &str[last_i];
	while (last_i >= 0)
    {
        if(c_in_str[last_i] == c)
            return (&c_in_str[last_i]);
        else
            last_i--;
    }
    return(0);
}
