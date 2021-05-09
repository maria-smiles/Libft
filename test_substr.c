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
	char	str[] = "lorem ipsum dolor sit amet";

	check_substr(str, 0, 10);

	check_substr(str, 7, 10);

	check_substr(str, 7, 0);

	check_substr(str, 0, 0);
	return (0);
}
