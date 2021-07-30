char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*d;

	d = dest;
	if (nb != 0)
	{
		while (*d)
			d++;
		while (nb-- != 0)
		{	
			if (*src)
				*d = *src++;
			else
				break ;
			d++;
		}
		*d = 0;
	}
	return (dest);
}
