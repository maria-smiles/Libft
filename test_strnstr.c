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

	printf("\n11)\n");

	//[fail]: your strnstr does not work with empty strings and 0 length
	//Test code:

	char *s1 = "AAAAAAAAAAAAA";
	size_t max = strlen(s1);

			check_strnstr(s1, s1, max);

//	Diffs:
//				strnstr: |AAAAAAAAAAAAA|
//			 ft_strnstr: |(null)|

	printf("\n12)\n");

//	[no crash]: your strnstr does not segfault when null parameter is sent
//	Test code:

	check_strnstr(((void *)0), "fake", 3);


	printf("\n13)\n");
	check_strnstr("", "", 0);

	printf("\n14)\n");
	check_strnstr("", (void *)0, 0);
	printf("\n15)\n");
	check_strnstr("", (void *)0, 10);



	printf("\n16)\n");
	check_strnstr((void *)0, (void *)0, 0);
	printf("\n17)\n");
	check_strnstr((void *)0, (void *)0, 4);
		return (0);


}

