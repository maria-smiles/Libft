#include <stdio.h>
#include <stdlib.h>



static void		ft_print_result(char const *s)
{
	printf("%s\n", s);
}

static void		check_strtrim(char *s1, char *set)
{
	char	*strtrim;
	strtrim = ft_strtrim(s1, set);
	ft_print_result(!(strtrim) ? "NULL" : strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned\n");
	else
		free(strtrim);
}

int				main()
{
	char	set [] = "\t \n";

	printf("1 try\n");
	char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
	check_strtrim(s1, set);

	printf("2 try\n");

	char s2[] = "lorem ipsum dolor sit amet \n \t ";
	check_strtrim(s2, set);

	printf("3 try\n");

	char s3[] = " \n \t lorem ipsum dolor sit amet";
	check_strtrim(s3, set);

	printf("4 try\n");

	char s4[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
	check_strtrim(s4, set);

	printf("5 try\n");

	char s5[] = "";
	check_strtrim(s5, set);

	return (0);
}
