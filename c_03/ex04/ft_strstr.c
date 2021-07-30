char	*ft_strstr(char *str, char *to_find)
{
	char	*a;
	char	*b;

	b = to_find;
	if (*b == 0)
		return (str);
	while (*str)
	{
		if (*str != *b)
		{
			str++;
			continue ;
		}
		a = str;
		while (1)
		{
			if (*b == 0)
				return (str);
			if (*a++ != *b++)
				break ;
		}
		b = to_find;
		str++;
	}
	return (0);
}
