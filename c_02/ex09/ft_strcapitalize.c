int	ft_str_is_alpha(char str)
{
	if (!((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z')))
		return (0);
	return (1);
}

int	ft_str_is_numeric(char str)
{
	if (!(str >= '0' && str <= '9'))
		return (0);
	return (1);
}

void	ft_strupcase(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= ('a' - 'A');
}

void	ft_strlowcase(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += ('a' - 'A');
}

char	*ft_strcapitalize(char *str)
{
	int		first;
	char	*backup;

	backup = str;
	first = 1;
	while (*str)
	{
		if (ft_str_is_alpha(*str) || ft_str_is_numeric(*str))
		{
			if (first == 1)
			{
				ft_strupcase(str);
				first = 0;
			}
			else
				ft_strlowcase(str);
		}
		else
			first = 1;
		str++;
	}
	return (backup);
}
