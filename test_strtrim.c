#include <stdio.h>
#include <stdlib.h>

#include "ft_strtrim.c"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strtrim(char *s1, char *set)
{
	char	*strtrim;

	if (!(strtrim = ft_strtrim(s1, set)))
		ft_print_result("NULL");
	else
		ft_print_result(strtrim);
	if (strtrim == s1)
		ft_print_result("\nA new string was not returned");
	else
		free(strtrim);
}

int				main()
{
	char	set [] = "\t \n";

	ft_print_result("1: ");
	{
		char s1[] = "lorem \n ipsum \t dolor \n sit \t amet";
		check_strtrim(s1, set);
	}

	ft_print_result("\n\n2: ");
	{
		char s1[] = "lorem ipsum dolor sit amet \n \t ";
		check_strtrim(s1, set);
	}

	ft_print_result("\n\n3: ");
	{
		char s1[] = " \n \t lorem ipsum dolor sit amet";
		check_strtrim(s1, set);
	}

	ft_print_result("\n\n4: ");
	{
		char s1[] = "  \n  \t  lorem \n ipsum \t dolor \n sit \t amet  \t \n ";
		check_strtrim(s1, set);
	}

	ft_print_result("\n\n5: ");
	{
		char s1[] = "          ";
		check_strtrim(s1, set);
	}
	return (0);
}
