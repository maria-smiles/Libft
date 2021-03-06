#include <stdlib.h>
#include <stdio.h>

#include "ft_substr.c"

static void		ft_print_result(char const *s)
{
	printf("%s\n", s);
}

static void		check_substr(char *str, int start, int len)
{
	char	*substr;
	substr = ft_substr(str, start, len);
	ft_print_result(!substr ? "NULL" : substr);
	if (str == substr)
		ft_print_result("\nA new string was not returned");
	else
		free(substr);
}

int				main()
{
//	char	str[] = "lorem ipsum dolor sit amet";
//printf("\n test 1\n");
//	check_substr(str, 0, 10);
//	printf("test 2\n");
//	check_substr(str, 7, 10);
//	printf("test 3\n");
//	check_substr(str, 7, 0);
//	printf("test 4\n");
//	check_substr(str, 0, 0);
//	printf("test 5\n");
//	check_substr(str, 40, 15);
//	printf("test end\n");
//
//
//	printf("new test\n");
//	char *stra = "01234";
//	size_t size = 10;
//	check_substr(stra, 10, size);
//	printf("new test 2\n");
//	char *strr = "\0";
//	check_substr(strr, 0, 1);
//	printf("new test 3\n");
//
//	check_substr(strr, 0, 2);
//	printf("new test 4\n");
//
//	check_substr(stra, 0, 42000);
//	printf("new test 5\n");
//	size_t sizeq = (size_t) NULL;
//	check_substr(stra, 10, sizeq);
//
//	if (!strncmp(ret, "", 1))
//	{
//		free(ret);
//		exit(TEST_SUCCESS);
//	}
//	free(ret);
//	exit(TEST_FAILED);
//
//	Diffs:
//	substr: ||
//	ft_substr: | strjoin d|
//	printf("test 6\n");
//	check_substr("tripouille", 0, 42000);
//
//	printf("test 7\n");
//	check_substr("tripouille", 1, 1);
//	printf("test 8\n");
//
//	check_substr("tripouille", 100, 1);
//	printf("test 9\n");
//	char * strq = strdup("1");
//	check_substr(strq, 42, 42000000);
//
//	printf("test 10\n");
//	strq = strdup("0123456789");
//	check_substr(strq, 9, 10);
//	printf("test 11\n");
//
//	check_substr("42", 0, 0);
//
//
//	printf("test 12\n");
//
//	check_substr("", 0, 0);
//
//	printf("test 13\n");
//char *strz;
//	check_substr(strz, 4, 2);
//
//	printf("test 14\n");
//
//	check_substr((void *)0, 4, 2);
//
//	printf("test 15\n");
//
//	check_substr((void *)0, 0, 0);
	printf("test 16\n");

	check_substr("tripouille", 0, 42000);


	printf("test 17\n");

	check_substr("", 0, 1);

	printf("test 18\n");

	check_substr("test", 10, 1);

	printf("test 19\n");

	check_substr("tripouille", 100, 1);

	printf("test end\n");

	return (0);
}
