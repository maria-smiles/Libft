#include <stdio.h>
#include "ft_strjoin.c"
void check(int succes)
{
	if (succes)
		printf("OK\n");
	else
		printf("KO\n");
}
int main()
{
	printf("\ntest 1, 2\n");
	char * s = ft_strjoin("tripouille", "42");
	/* 1 */ check(!strcmp(s, "tripouille42"));
	/* 2 */ printf("len must be   %d\n", strlen("tripouille") + strlen("42") +
	1); free(s);

	printf("\ntest 3, 4\n");
	s = ft_strjoin("", "42");
	/* 3 */ check(!strcmp(s, "42"));
	/* 4 */ printf("len must be   %d\n", strlen("") + strlen("42") + 1);
	free(s);

	printf("\ntest 5, 6\n");
	s = ft_strjoin("42", "");
	/* 5 */ check(!strcmp(s, "42"));
	/* 6 */ printf("len must be   %d\n", strlen("42") + strlen("") + 1);
	free(s);

	printf("\ntest 7, 8\n");
	s = ft_strjoin("", "");
	/* 7 */ check(!strcmp(s, ""));
	/* 8 */ printf("len must be   %d\n", strlen("") + strlen("") + 1);
	free(s);

}