#include <unistd.h>
#include <stdio.h>

void ft_putchar(char c){
	write(1,&c,1);
}

void ft_putnb(int num, char div){

	int resto = num%10;
	num /= 10;
	num %= 10;

	ft_putchar('0'+num);
	ft_putchar('0'+resto);

	if(div != 'x')
		ft_putchar(div);
}

void ft_print_comb2(){
	
	int first = -1;
	int second;

	while(++first < 99){
		second = first + 1;
		while(second <= 99){
			ft_putnb(first,' ');
			if(first == 98 && second == 99){
				ft_putnb(second,'x');
			}else{
				ft_putnb(second,',');
				ft_putchar(' ');
			}

			second++;
		}
	}
}
