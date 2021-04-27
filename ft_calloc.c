#include	"libft.h"
#include	<stdlib.h>

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc (size * num);
	ft_bzero (ptr, size * num);
	return (ptr);
}
