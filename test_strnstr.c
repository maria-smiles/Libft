#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_strnstr.c"
static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strnstr(char *big, char *little, int len)
{
	const char *str;

	if (!(str = ft_strnstr(big, little, len)))
		ft_print_result("NULL");
	else
		ft_print_result(str);
}

int				main()
{
printf("\n1)\n");
		check_strnstr("lorem ipsum dolor sit amet", "lorem", 15);
	printf("\n2)\n");
		check_strnstr("lorem ipsum dolor sit amet", "ipsum", 15);
	printf("\n3)\n");
		check_strnstr("lorem ipsum dolor sit lorem ipsum dolor", "ipsum", 35);
	printf("\n4)\n");
		check_strnstr("lorem ipsum dolor sit amet", "", 10);
	printf("\n5)\n");
		check_strnstr("lorem ipsum dolor sit amet", "ipsumm", 30);
	printf("\n6)\n");
		check_strnstr("lorem ipsum dolor sit amet", "dol", 30);
	printf("\n7)\n");
		check_strnstr("lorem ipsum dolor sit amet", "consectetur", 30);
	printf("\n8)\n");
		check_strnstr("lorem ipsum dolor sit amet", "sit", 10);
	printf("\n9)\n");
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 15);
	printf("\n10)\n");
		check_strnstr("lorem ipsum dolor sit amet", "dolor", 0);
	return (0);
}

