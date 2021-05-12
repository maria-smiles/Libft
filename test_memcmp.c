#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "ft_memcmp.c"

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
	printf ("\ntest 1\n");
	ft_print_result(ft_memcmp("salut", "salut", 5));
	printf ("\ntest 2\n");
	ft_print_result(ft_memcmp("t\200", "t\0", 2));
	printf ("\ntest 3\n");
	ft_print_result(ft_memcmp("testss", "test", 5));
	printf ("\ntest 4\n");
	ft_print_result(ft_memcmp("test", "tEst", 4));
	printf ("\ntest 5\n");
	ft_print_result(ft_memcmp("", "test", 4));
	printf ("\ntest 6\n");
	ft_print_result(ft_memcmp("test", "", 4));
	printf ("\ntest 7\n");
	ft_print_result(ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf ("\ntest 8\n");
	ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", 6));
	printf ("\ntest 9\n");
	ft_print_result(ft_memcmp("zyxbcdefgh", "abcdefgxyz", 0));

	char s[] = {-128, 0, 127, 0};
	char sCpy[] = {-128, 0, 127, 0};
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf ("\ntest 10\n");
	ft_print_result(ft_memcmp(s, sCpy, 4));
	printf ("\ntest 11\n");
	ft_print_result(ft_memcmp(s, s2, 0));
	printf ("\ntest 12\n");
	ft_print_result(ft_memcmp(s, s2, 1));
	printf ("\ntest 13\n");
	ft_print_result(ft_memcmp(s2, s, 1));
	printf ("\ntest 14\n");
	ft_print_result(ft_memcmp(s2, s3, 4));
	printf ("\ntest 15\n");
	ft_print_result(ft_memcmp((void *) 0, s3, 4));
	printf ("\ntest 16\n");
	ft_print_result(ft_memcmp(s2,(void *) 0, 4));
	printf ("\ntest 17\n");
	ft_print_result(ft_memcmp((void *) 0,(void *) 0, 4));
	printf ("\ntest 18\n");
	ft_print_result(ft_memcmp((void *) 0, s3, 0));
	printf ("\ntest 19\n");
	ft_print_result(ft_memcmp(s2,(void *) 0, 0));
	printf ("\ntest 20\n");
	ft_print_result(ft_memcmp((void *) 0,(void *) 0, 0));
	printf ("\ntest 21\n");
	ft_print_result(ft_memcmp("abcdefgh", "abcdwxyz", -6));
	printf ("\n");


	char *st1 = "atoms\0\0\0\0";
	char *st2 = "atoms\0abc";
	size_t size = 8;
	int i1 = memcmp(st1, st2, size);
	int i2 = ft_memcmp(st1, st2, size);

	printf("%d,  %d\n", i1, i2);
	st1 = "\xff\0\0\xaa\0\xde\xffMACOSX\xff";
	st2 = "\xff\0\0\xaa\0\xde\x00MBS";
	size = 9;
	i1 = memcmp(st1, st2, size);
	i2 = ft_memcmp(st1, st2, size);

	printf("%d,  %d\n", i1, i2);
//	size = 10;
//	char *b1 = electric_alloc(size);
//	char *b2 = electric_alloc(size);
//
//	__builtin___strcpy_chk (b1, ".........", __builtin_object_size (b1, 2 > 1 ? 1 : 0));
//	__builtin___strcpy_chk (b2, ".........", __builtin_object_size (b2, 2 > 1 ? 1 : 0));
//	ft_memcmp(b1, b2, size);

	return (0);
}
