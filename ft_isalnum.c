#include "libft.h"

int	ft_isalnum(int ch)
{
	if (ft_isdigit(ch) || ft_isalpha(ch))
		return (1);
	else
		return (0);
}
