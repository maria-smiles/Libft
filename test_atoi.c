#include <stdio.h>
#include "ft_atoi.c"
#include <stdlib.h>
#include <unistd.h>


static void		ft_print_result2(char c)
{
	write(1, &c, 1);
}

static void		ft_print_result(int n)
{
	if (n >= 0)
	{
		if (n >= 10)
			ft_print_result(n / 10);
		ft_print_result2(n % 10 + '0');
	}
	else
	{
		ft_print_result2('-');
		if (n <= -10)
			ft_print_result(n / -10);
		ft_print_result2(n % -10 * -1 + '0');
	}
}
int main()
{
	{
//[KO]: your atoi does not work with over long max value
//		Test code:
		char n[] = "99999999999999999999999999";

		int i2 = ft_atoi(n);

		printf("\n%d\n", i2);
//Diffs:
//atoi: |-1|
//ft_atoi: |-469762049|
	}
//	test this too
//	{
//		−9223372036854775828, −9223372036854775028, 9223372036854775828, 9223372036854775808
//		-+1
//		+-1
//	}

	{
//[KO]: your atoi does not work with over long min value
//		Test code:
		char n[] = "-99999999999999999999999999";

		int i2 = ft_atoi(n);
		printf("\n%d\n",  i2);
//Diffs:
//atoi: |0|
//ft_atoi: |469762049|
	}
	printf("\ntest 1\n");
	ft_print_result(ft_atoi("0"));
	printf("\ntest 2\n");
		ft_print_result(ft_atoi("546:5"));
	printf("\ntest 3\n");
		ft_print_result(ft_atoi("-4886"));
	printf("\ntest 4\n");
		ft_print_result(ft_atoi("+548"));
	printf("\ntest 5\n");
		ft_print_result(ft_atoi("054854"));
	printf("\ntest 6\n");
		ft_print_result(ft_atoi("000074"));
	printf("\ntest 7\n");
		ft_print_result(ft_atoi("+-54"));
	printf("\ntest 8\n");
		ft_print_result(ft_atoi("-+48"));
	printf("\ntest 9\n");
		ft_print_result(ft_atoi("--47"));
		printf("\n");
	ft_print_result(atoi("--47"));
	printf("\ntest 10\n");
		ft_print_result(ft_atoi("++47"));
	printf("\ntest 11\n");
		ft_print_result(ft_atoi("+47+5"));
	printf("\ntest 12\n");
		ft_print_result(ft_atoi("-47-5"));
	printf("\ntest 13\n");
		ft_print_result(ft_atoi("\e475"));
	printf("\ntest 14\n");
		ft_print_result(ft_atoi("\t\n\r\v\f  469 \n"));
	printf("\ntest 15\n");
		ft_print_result(ft_atoi("-2147483648"));
	printf("\ntest 16\n");
		ft_print_result(ft_atoi("2147483647"));
	printf("\ntest 17\n");
		ft_print_result(ft_atoi("\t\n\r\v\fd469 \n"));
	printf("\ntest 18\n");
		ft_print_result(ft_atoi("\n\n\n  -46\b9 \n5d6"));
	printf("\ntest 19\n");
		ft_print_result(ft_atoi("−9223372036854775828"));
	printf("\ntest 20\n");
	ft_print_result(ft_atoi("−9223372036854775028"));
	printf("\ntest 21\n");
	ft_print_result(ft_atoi("9223372036854775828"));
	printf("\ntest 22\n");
	ft_print_result(ft_atoi("9223372036854775808"));
	printf("\ntest 23\n");
	ft_print_result(ft_atoi("-+1"));
	printf("\ntest 24\n");
	ft_print_result(ft_atoi("+-1"));
	printf("\ntest 25\n");
	char *d;
	ft_print_result(ft_atoi(d));
	printf("\ntest 26\n");
	ft_print_result(ft_atoi(""));

}
