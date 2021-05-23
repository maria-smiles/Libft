#include <stdio.h>
#include "ft_strjoin.c"
void check(int succes)
{
	if (succes)
		printf("\nOK\n");
	else
		printf("\nKO\n");
}
void	ft_print_result(char const *s)

{

	int		len;


	len = 0;

	while (s[len])

		len++;

	write(1, s, len);

}
int main()
{

	printf("\ntest 0\n");
	char * s = ft_strjoin("lorem ipsum", "\0");
	ft_print_result(s);
	/* 1 */ check(!strcmp(s, "lorem ipsum"));
	/* 2 */ printf("len must be   %d\n", strlen("lorem ipsum") + strlen("\0") +
										 1); free(s);

	printf("\ntest 1, 2\n");
	s = ft_strjoin("tripouille", "42");
	ft_print_result(s);
	/* 1 */ check(!strcmp(s, "tripouille42"));
	/* 2 */ printf("len must be   %d\n", strlen("tripouille") + strlen("42") +
	1); free(s);

	printf("\ntest 3, 4\n");
	s = ft_strjoin("", "42");
	ft_print_result(s);
	/* 3 */ check(!strcmp(s, "42"));
	/* 4 */ printf("len must be   %d\n", strlen("") + strlen("42") + 1);
	free(s);

	printf("\ntest 5, 6\n");
	s = ft_strjoin("42", "");
	ft_print_result(s);
	/* 5 */ check(!strcmp(s, "42"));
	/* 6 */ printf("len must be   %d\n", strlen("42") + strlen("") + 1);
	free(s);

	printf("\ntest 7, 8\n");
	ft_print_result(s);
	s = ft_strjoin("", "");
	/* 7 */ check(!strcmp(s, ""));
	/* 8 */ printf("len must be   %d\n", strlen("") + strlen("") + 1);
	free(s);

	char	s1[] = "lorem ipsum";

	char	s2[] = "dolor sit amet";

	char	*strjoin;


	printf("\ntest 9\n");

	{
		if (!(strjoin = ft_strjoin(s1, s2)))
			ft_print_result("NULL");
		else
			ft_print_result(strjoin);
		if (strjoin == s1 || strjoin == s2)
			ft_print_result("\nA new string was not returned");

	}

	printf("\ntest 10\n");

	{
		s1[0] = '\0';
		if (!(strjoin = ft_strjoin(s1, s2)))
			ft_print_result("NULL");
		else
			ft_print_result(strjoin);
		if (strjoin == s1 || strjoin == s2)
			ft_print_result("\nA new string was not returned");
	}

	printf("\ntest 11\n");

	{
		s1[0] = 'l';
		s2[0] = '\0';
		if (!(strjoin = ft_strjoin(s1, s2)))
			ft_print_result("NULL");
		else
			ft_print_result(strjoin);
		if (strjoin == s1 || strjoin == s2)
			ft_print_result("\nA new string was not returned");
	}

	printf("\ntest 12\n");

	{
		s1[0] = '\0';
		s2[0] = '\0';
		if (!(strjoin = ft_strjoin(s1, s2)))
			ft_print_result("NULL");
		else
			ft_print_result(strjoin);
		if (strjoin == s1 || strjoin == s2)
			ft_print_result("\nA new string was not returned");
	}

	return (0);

}
//Входящий null


//= ft_strjoin.c =================================================================
//$> norminette ft_strjoin.c | grep -E '(Error|Warning)'
//$> clang -Wextra -Wall -Werror -g3 -fsanitize=address ft_strjoin.c main.c libft.a -o user_exe
//= Test 1 ===================================================
//$> ./user_exe 01
//Command './user_exe 01' got killed by an Abort
//= Test 2 ===================================================
//$> ./user_exe 02
//Command './user_exe 02' got killed by an Abort
//= Test 3 ===================================================
//$> ./user_exe 03
//Command './user_exe 03' got killed by an Abort
//= Test 4 ===================================================
//$> ./user_exe 04
//Command './user_exe 04' got killed by an Abort
