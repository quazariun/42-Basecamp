void	ft_putchar(char first, char mid, char last, int len);

void	rush(int x, int y)
{
	ft_putchar('A', 'B', 'A', x);
	while (--y > 1)
		ft_putchar('B', ' ', 'B', x);
	if (++y > 1)
		ft_putchar('C', 'B', 'C', x);
}
