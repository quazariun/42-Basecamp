#include <stdio.h>

void mostra_mensagem()
{
	printf("PRIMEIRA FUNÇÃO\n");
}

int soma_numero(int a, int b)
{
	int resultado;
	resultado = a + b;
	return resultado;
}

void outra_mensagem()
{
	printf("FUNÇÃO 2 \n\n");
}

void mensagem_final()
{
	printf("tteseeset\n\n\n");
} 

int main()
{
	int c;
	c = soma_numero(4,9);

	mostra_mensagem();
	
	printf("%d <--- número da soma de 4 por 9\n\n",c);

	return 0;
}