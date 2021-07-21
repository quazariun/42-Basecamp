void	ft_putchar(char first, char mid, char last, int len);

void	rush(int x, int y)
{
	ft_putchar('o', '-', 'o', x);
	while (--y > 1)
		ft_putchar('|', ' ', '|', x);
	if (++y > 1)
		ft_putchar('o', '-', 'o', x);
}
