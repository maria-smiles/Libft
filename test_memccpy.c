#include "libft.h"

int main()
{
	char dst[20] = "aaaaaaaaaaaaaaaaaaa\0";
	char src[10] = "qqqqqqqqqq";
	char *p = ft_memccpy(dst, src, 'p', 10);


}