#include	"libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = malloc (size * num);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, size * num);
	return (ptr);
}
