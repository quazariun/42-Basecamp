#include <unistd.h>

void ft_print_reverse_alphabet (){
	char let;

	let = 'z'+1;

	while(let-- > 'a'){
		write(1,&let,1);
	}
}