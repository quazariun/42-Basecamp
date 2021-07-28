void	ft_ultimate_div_mod(int *a, int *b)
{
	int	x;

	if (*b != 0)
	{
		x = *a / *b;
		*b = *a % *b;
		*a = x;
	}
}
