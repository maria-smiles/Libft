#include "libft.h"

static void	ft_putnbr(char *str, int i, int j, int n)
{
	str[i] = '\0';
	i -= 1;
	while (i >= j)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i--;
	}
}

static char	*ft_num(int n, char *str)
{
	int		j;
	int		i;

	j = n;
	i = 0;
	while (j / 10 != 0)
	{
		i++;
		j = j / 10;
	}
	str = (char *) malloc(sizeof(char) * (i + 2));
	j = 0;
	if (n < 0)
	{
		str[0] = '-';
		i += 1;
		j += 1;
		n = -n;
	}
	ft_putnbr(str, i + 1, j, n);
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	i;

	str = NULL;
	if (n == -2147483648)
	{
		str = malloc(sizeof(char) * (12));
		if (!str)
			return (NULL);
		i = ft_strlcpy(str, "-2147483648", 12);
		if (i == 11)
			return (str);
		else
			return (NULL);
	}
	else
	{
		str = ft_num(n, str);
		return (str);
	}
}
