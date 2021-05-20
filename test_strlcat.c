#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "ft_strlcat.c"
#include <string.h>

void	ft_print_result(int n)

{

	char c;

	if (n >= 10)

		ft_print_result(n / 10);

	c = n % 10 + '0';

	write (1, &c, 1);

}

int		main()

{

	char	*dest;



	if (!(dest = (char *)malloc(sizeof(*dest) * 15)))

		return (0);

	memset(dest, 0, 15);

	memset(dest, 'r', 6);

	printf("\n1)\n");

	{

		dest[11] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}


	printf("\n2)\n");
	{

		ft_print_result(ft_strlcat(dest, "", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n3)\n");

	{

		dest[0] = '\0';

		dest[11] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n4)\n");

	{

		dest[14] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n5)\n");

	{

		dest[10] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n6)\n");

	{

		dest[10] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 1));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n7)\n");

	{
//= Test 7 ===================================================
//$> ./user_exe 07
//Command './user_exe 07' got killed by an Abort

		memset(dest, 'r', 15);

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 5));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n8)\n");

	{

		dest[10] = 'a';

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 6));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	printf("\n9)\n");

	{

		memset(dest, 'r', 14);

		ft_print_result(ft_strlcat(dest, "lorem ipsum dolor sit amet", 15));

		write(1, "\n", 1);

		write(1, dest, 15);

	}

	return (0);

}
