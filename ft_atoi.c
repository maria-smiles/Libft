static int	ft_minus(int i, int *z, const char stri)
{
	if (stri == '-')
	{
		*z = -1;
		i++;
	}
	else if (stri == '+')
		i++;
	return (i);
}

int	ft_atoi (const char *str)
{
	int			i;
	long long	num;
	int			z;

	i = 0;
	num = 0;
	if (*str == '\0')
		return (0);
	while (str[i] == '\n' || str[i] == '\t' || str[i] == '\r' || \
		   str[i] == '\v' || str[i] == '\f' || str[i] == ' ')
		i++;
	z = 1;
	i = ft_minus(i, &z, str[i]);
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = 10 * num + (str[i] - '0');
		i++;
		if ((num > 2147483647) && (z == 1))
			return (-1);
		if ((num > 2147483648) && (z == -1))
			return (0);
	}
	return (z * (int) num);
}
