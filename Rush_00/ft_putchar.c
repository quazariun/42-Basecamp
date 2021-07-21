#include <unistd.h>
void	ft_putchar(char first, char mid, char last, int len)
{	
	write(1, &first, 1);
	while (--len > 1)
		write(1, &mid, 1);
	if (++len > 1)
		write(1, &last, 1);
	write(1, "\n", 1);
}
