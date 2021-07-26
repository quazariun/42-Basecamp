#include <unistd.h>

void ft_print_numbers(void){
	int lett;
	lett = '0'-1;

	while(lett++ < '9'){
		write(1,&lett,1);
	}
}