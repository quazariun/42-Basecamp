int	is_space(char c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}

int	is_number(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	signal;
	int	result;

	result = 0;
	signal = 1;
	while (is_space(*str))
		str++;
	while (*str == '-' || *str == '+')
		if (*str++ == '-')
			signal *= -1;
	while (is_number(*str))
	{
		result = (result * 10) + (*str - '0');
		str++;
	}
	return (result * signal);
}
