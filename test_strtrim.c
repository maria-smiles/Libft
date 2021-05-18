#include <stdio.h>
#include <stdlib.h>

#include "ft_strtrim.c"

//static void		ft_print_result(char const *s)
//{
//	int		len;
//
//	len = 0;
//	while (s[len])
//		len++;
//	write(1, s, len);
//}
//
//static void		check_strtrim(char *s1, char *set)
//{
//	char	*strtrim;
//
//	if (!(strtrim = ft_strtrim(s1, set)))
//		ft_print_result("NULL");
//	else
//		ft_print_result(strtrim);
//	if (strtrim == s1)
//		ft_print_result("\nA new string was not returned");
//	else
//		free(strtrim);
//}

int				main()
{
//	char	set [] = "\t \n";
//
//	ft_print_result("1: ");
//	{
//		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
//		check_strtrim(s1, set);
//	}
//
//	ft_print_result("\n\n2: ");
//	{
//		char s1[] = "lorem ipsum dolor sit amet \n \t ";
//		check_strtrim(s1, set);
//	}
//
//	ft_print_result("\n\n3: ");
//	{
//		char s1[] = " \n \t lorem ipsum dolor sit amet";
//		check_strtrim(s1, set);
//	}
//
//	ft_print_result("\n\n4: ");
//	{
//		char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
//		check_strtrim(s1, set);
//	}
//
//	ft_print_result("\n\n5: ");
//	{
//		char s1[] = "          ";
//		check_strtrim(s1, set);
//	}
	printf("\n test 1, 2\n");
	char * sss = ft_strtrim("   xxxtripouille", " x");


	/* 1 */ printf("%d\n", strcmp(sss, "tripouille"));
	/* 2 */ printf("malloc size must be = %zu\n", strlen("tripouille")	+ 1);
	free(sss);
	printf("\n test 3, 4\n");
	sss = ft_strtrim("tripouille   xxx", " x");
	/* 3 */ printf("%d\n", strcmp(sss, "tripouille"));
	/* 4 */ printf("malloc size must be = %zu\n", strlen("tripouille") + 1);
	free(sss);
	printf("\n test 5, 6\n");
	sss = ft_strtrim("   xxxtripouille   xxx", " x");
	/* 5 */ printf("%d\n", strcmp(sss, "tripouille"));
	/* 6 */ printf("malloc size must be = %zu\n", strlen("tripouille") + 1);
	free(sss);
	printf("\n test 7, 8\n");
	sss = ft_strtrim("   xxx   xxx", " x");
	/* 7 */ printf("%d\n", strcmp(sss, ""));
	/* 8 */ printf("malloc size must be = %zu\n", 1);
	free(sss);
	printf("\n test 9, 10\n");
	sss = ft_strtrim("", "123");
	/* 9 */ printf("%d\n", strcmp(sss, ""));
	/* 10 */ printf("malloc size must be = %zu\n", 1);
	free(sss);
	printf("\n test 11, 12\n");
	sss = ft_strtrim("123", "");
	/* 11 */ printf("%d\n", strcmp(sss, "123"));
	/* 12 */ printf("malloc size must be = %zu\n", 4);
	free(sss);
	printf("\n test 13, 14\n");
	sss = ft_strtrim("", "");
	/* 13 */ printf("%d\n", strcmp(sss, ""));
	/* 14 */ printf("malloc size must be = %zu\n", 1);
	free(sss);


	return (0);
}
