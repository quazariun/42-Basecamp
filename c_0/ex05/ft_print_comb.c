#include <unistd.h>
#include <stdio.h>

void ft_putchar(char cen,char dez, char uni){
	write(1,&cen,1);
	write(1,&dez,1);
	write(1,&uni,1);
	write(1,"\n",1);
}

void ft_print_comb(void)
{
	int cen = 0;
	int dez = 1;
	int uni = 2;
	
	while(cen <= 9){
		while(dez <= 9){
			while(uni <= 9){
				ft_putchar('0'+cen,'0'+dez,'0'+uni);
				uni++;
			}
			uni = dez + 2;
			dez++;
		}
		dez = cen + 2;
		uni = dez + 1;
		cen++;
	}
}
