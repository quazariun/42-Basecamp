char	*ft_strlowcase(char *str)
{
	char	*backup;

	backup = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str += ('a' - 'A');
		str++;
	}
	return (backup);
}
