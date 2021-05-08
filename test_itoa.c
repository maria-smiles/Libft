#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

#include "ft_itoa.c"

static void		ft_print_result(char *s)
{
	int		len;

	if (!s)
		write(1, "NULL", 4);
	else
	{
		len = 0;
		while (s[len])
			len++;
		write(1, s, len);
		free(s);
	}
}

int				main()
{

	//else if ((arg = atoi(argv[1])) == 1)
		ft_print_result(ft_itoa(0));
		printf("\n");

	//else if (arg == 2)
		ft_print_result(ft_itoa(9));
	printf("\n");

	//else if (arg == 3)
		ft_print_result(ft_itoa(-9));
	printf("\n");

	//else if (arg == 4)
		ft_print_result(ft_itoa(10));
	printf("\n");
		ft_print_result(ft_itoa(10));
	printf("\n");
	printf("\n");
	//else if (arg == 5)
		ft_print_result(ft_itoa(-10));
	printf("\n");

	//else if (arg == 6)
		ft_print_result(ft_itoa(8124));
	printf("\n");

	//else if (arg == 7)
		ft_print_result(ft_itoa(-9874));
	printf("\n");

	//else if (arg == 8)
		ft_print_result(ft_itoa(543000));
	printf("\n");

	//else if (arg == 9)
		ft_print_result(ft_itoa(-2147483648LL));
	printf("\n");

	//else if (arg == 10)
		ft_print_result(ft_itoa(2147483647));
	printf("\n");



	return (0);
}
