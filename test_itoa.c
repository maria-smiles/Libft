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

	printf("\n15)\n");
	{

		char *res = ft_itoa(0);

		ft_print_result(res);

		free(res);

	}

	printf("\n16)\n");

	{

		char *res = ft_itoa(9);

		ft_print_result(res);

		free(res);

	}

	printf("\n17)\n");

	{

		char *res = ft_itoa(-9);

		ft_print_result(res);

		free(res);

	}

	printf("\n18)\n");

	{

		char *res = ft_itoa(10);

		ft_print_result(res);

		free(res);

	}

	printf("\n19)\n");

	{

		char *res = ft_itoa(-10);

		ft_print_result(res);

		free(res);

	}

	printf("\n20)\n");

	{

		char *res = ft_itoa(8124);

		ft_print_result(res);

		free(res);

	}

	printf("\n21)\n");

	{

		char *res = ft_itoa(-9874);

		ft_print_result(res);

		free(res);

	}

	printf("\n22)\n");

	{

		char *res = ft_itoa(543000);

		ft_print_result(res);

		free(res);

	}

	printf("\n23)\n");

	{

		char *res = ft_itoa(-2147483648LL);

		ft_print_result(res);

		free(res);

	}

	printf("\n24)\n");

	{

		char *res = ft_itoa(2147483647);

		ft_print_result(res);

		free(res);

	}

	return (0);
}
/*


void	ft_print_result(char const *s)

{

	int		len;



	len = 0;

	while (s[len])

		len++;

	write(1, s, len);

}


 */

//= Test 3 ===================================================
//$> ./user_exe 03
//Command './user_exe 03' got killed by an Abort
//= Test 5 ===================================================
//$> ./user_exe 05
//Command './user_exe 05' got killed by an Abort
//= Test 7 ===================================================
//$> ./user_exe 07
//Command './user_exe 07' got killed by an Abort