#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "ft_itoa.c"

static void		ft_print_result(char *s)
{
	printf("%s\n",s);
}

int				main()
{
	printf("1)\n");
	//else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_itoa(0));
		printf("\n2)\n");

	//else if (arg == 2)
		ft_print_result(ft_itoa(9));
	printf("\n3)\n");

	//else if (arg == 3)
		ft_print_result(ft_itoa(-9));
	printf("\n4)\n");

	//else if (arg == 4)
		ft_print_result(ft_itoa(10));
	printf("\n5\n");


	//else if (arg == 5)
		ft_print_result(ft_itoa(-10));
	printf("\n6)\n");

	//else if (arg == 6)
		ft_print_result(ft_itoa(8124));
	printf("\n7)\n");

	//else if (arg == 7)
		ft_print_result(ft_itoa(-9874));
	printf("\n8)\n");

	//else if (arg == 8)
		ft_print_result(ft_itoa(543000));
	printf("\n9)\n");

	//else if (arg == 9)
		ft_print_result(ft_itoa(-2147483648LL));
	printf("\n10)\n");

	//else if (arg == 10)
		ft_print_result(ft_itoa(2147483647));
	printf("\n11)\n");

	ft_print_result(ft_itoa(INT_MAX));

	printf("\n12)\n");

	ft_print_result(ft_itoa(INT_MIN));


	printf("\n13)\n");
	ft_print_result( ft_itoa(0));


	printf("\n14)\n");
	ft_print_result(ft_itoa(42));
	printf("\n");



	return (0);
}
