#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "ft_strncmp.c"

static void		ft_print_result(int n)
{
	if (n > 0)
		write(1, "1", 1);
	else if (n < 0)
		write(1, "-1", 2);
	else
		write(1, "0", 1);
}

int				main()
{
	printf("\ntest 1\n");
		ft_print_result(ft_strncmp("salut", "salut", 5));
	printf("\ntest 2\n");
		ft_print_result(ft_strncmp("test", "testss", 7));
	printf("\ntest 3\n");
		ft_print_result(ft_strncmp("testss", "test", 7));
	printf("\ntest 4\n");
		ft_print_result(ft_strncmp("test", "tEst", 4));
	printf("\ntest 5\n");
		ft_print_result(ft_strncmp("", "test", 4));
	printf("\ntest 6\n");
		ft_print_result(ft_strncmp("test", "", 4));
	printf("\ntest 7\n");
		ft_print_result(ft_strncmp("abcdefghij", "abcdefgxyz", 3));
	printf("\ntest 8\n");
		ft_print_result(ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("\ntest 9\n");
		ft_print_result(ft_strncmp("zyxbcdefgh", "abcdwxyz", 0));
	printf("\ntest 10\n");
		ft_print_result(ft_strncmp("abcdefgh", "", 0));
	printf("\ntest 11\n");
		ft_print_result(ft_strncmp("test\200", "test\0", 6));

	printf("\ntest 12\n");

	char *s1 = "atoms\0\0\0\0";
	char *s2 = "atoms\0abc";
	size_t size = 8;
	int i1 = ((strncmp(s1, s2, size) > 0) ? 1 : ((strncmp(s1, s2, size) < 0) ? -1 : 0));
	int i2 = ((ft_strncmp(s1, s2, size) > 0) ? 1 : ((ft_strncmp(s1, s2, size) < 0) ? -1 : 0));
	printf("%d,  %d\n", i1, i2);

	ft_print_result(strncmp(s1, s2, size));
	ft_print_result(ft_strncmp(s1, s2, size));

	return (0);
}
