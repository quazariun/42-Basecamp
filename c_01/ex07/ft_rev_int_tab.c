#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	count;
	int	aux;
	int limit;

	count = 0;
	limit = size / 2;
	while (size > limit)
	{
		aux = tab[--size];
		tab[size] = tab[count];
		tab[count++] = aux;
	}

}


int main()
{
	int matrix[5];
	int matrix2[] = {1,2,3,4};
    matrix[0] = 1;
    matrix[1] = 2;
    matrix[2] = 3;
    matrix[3] = 4;

    ft_rev_int_tab(matrix2, 4);
    printf("\n%d\n", matrix2[0]);
    printf("%d\n", matrix2[1]);
    printf("%d\n", matrix2[2]);
    printf("%d\n", matrix2[3]);

	return 0;
}