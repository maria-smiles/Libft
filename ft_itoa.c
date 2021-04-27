#include <stdlib.h>

static void	ft_putnbr(char *str, int i, int j, int n)
{
	str[i] = '\0';
	i -= 1;
	while (i >= j)
	{
		str[i] = n % 10;
		n = n / 10;
		i--;
	}
}

char	*ft_itoa(int n)
{
	int		i;
	int		j;
	char	*str;

	j = n;
	i = 0;
	while (j / 10 != 0)
	{
		i++;
		j = j / 10;
	}
	str = (char *)malloc(sizeof(str) * (i + 2));
	j = 0;
	if (n < 0)
	{
		str[0] = '-';
		i += 1;
		j += 1;
		n = -n;
	}
	ft_putnbr(&str[j], i, j, n);
	return (&str[0]);
}
