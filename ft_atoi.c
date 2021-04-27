int	ft_atoi (const char *str)
{
	int		i;
	int		num;

	i = 0;
	num = 0;
	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		num = 10 * num + (str[i] - '0');
		i++;
	}
	return (num);
}
