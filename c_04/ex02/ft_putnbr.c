#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	char	str[1000];
	int		i;
	int		flag;

	i = 0;
	flag = 1;
	if (nb == 0)
		write(1, "0", 1);
	if (nb < 0)
	{
		write(1, "-", 1);
		flag = -1;
	}
	while (nb != 0)
	{
		str[i] = '0' + ((nb % 10) * flag);
		nb = nb / 10;
		++i;
	}
	while (--i >= 0)
		ft_putchar(str[i]);
}
