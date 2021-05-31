#include <unistd.h>
#include <stdio.h>

#include "ft_strrchr.c"

static void		ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
}

char	*ft_strrchr1(const char *str, int c)
{
	long long int	last_i;

	last_i = ft_strlen(str);

	while (last_i)
	{
		if(str[last_i] == (char) c)
			return ((char *) &str[last_i]);
		last_i--;
	}
	return (0);
}

static void		check_strrchr(char *s, int c, int offset)
{
	char		*str;

	if (!(str = ft_strrchr(s, c)))
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
//	char		str2[] = "bonjour";



//		check_strrchr(str2, 'b', 0);
//
//		check_strrchr(str2, 'o', 4);
//
//	{
//		char	str3[]= "bonjourno";
//
//		check_strrchr(str3, 'o', 8);
//	}
//
//		check_strrchr(str2, 'j', 3);
//
//		check_strrchr(str2, 's', 0);//
//
//		check_strrchr(str2, '\0', 7);
//
//	{
//		char	str3[] = "";
//
//		check_strrchr(str3, '\0', 0);
//	}
	char s[] = "tripouille";
/* 6 */ check_strrchr(s, 't' + 256, 0);


//		check_strrchr(str2 + 2, 'b', 0);//
	return (0);
}
