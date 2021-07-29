char	*ft_strupcase(char *str)
{
	char	*backup;

	backup = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str -= ('a' - 'A');
		str++;
	}
	return (backup);
}
