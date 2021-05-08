#include <unistd.h>
#include <stdio.h>

#include "ft_strchr.c"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

static void		check_strchr(char *s, int c, int offset)
{
	char		*str;

	if (!(str = ft_strchr(s, c)))
		ft_print_result("NULL");
	else
	{
		ft_print_result(str);
		if (str != (s + offset))
			ft_print_result("\nReturn value is false");
	}
	printf("\n");
}

int				main()
{
	char		str2[] = "bonjour";


		check_strchr(str2, 'b', 0);

		check_strchr(str2, 'o', 1);

		check_strchr(str2, 'j', 3);

		check_strchr(str2, 's', 0);

		check_strchr(str2, '\0', 7);

	{
		char	str3[] = "";

		check_strchr(str3, '\0', 0);
	}
	return (0);
}

