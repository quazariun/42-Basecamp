#include <unistd.h>

void ft_print_alphabet (){
	char let;

	let = 'a'-1;

	while(let++ < 'z'){
		write(1,&let,1);
	}
}