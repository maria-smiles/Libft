#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	len_s1;
	unsigned int	len_s2;
	unsigned int	i;
	char			*new_s;

	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	i = 0;
	new_s = malloc(sizeof(s1) * (len_s1 + len_s2 + 1));
	while (i < len_s1)
	{
		new_s[i] = s1[i];
		i++;
	}
	while (i < (len_s1 + len_s2))
	{
		new_s[i] = s2[i - len_s1];
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}
