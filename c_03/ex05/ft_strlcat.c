unsigned int	ft_strlen(char *str)
{
	unsigned int	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	srcindex;
	unsigned int	dstlen;

	dstlen = ft_strlen(dest);
	srcindex = 0;
	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	while (src[srcindex] != '\0' && (dstlen + 1) < size)
	{
		dest[dstlen++] = src[srcindex++];
	}
	dest[dstlen] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[srcindex]));
}
