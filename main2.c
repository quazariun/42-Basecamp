#include <stdio.h>

int soma(int a, int b)
{
	int d = a + b;
	return d;
}

void mensagem()
{
	printf("Isso aqui é um teste!!!\n");
}

void outra_mensagem()
{
	printf("ISSO AQUI É UMA MENSAGEM DE VERDADE!!!\n\n\n\n");
}

int multiplica(int x, int y)
{
	resultado = x * y;
	return resultado;
}

void mensagem_final()
{
	printf("MENSAGEM FINAL!!!!\n\n");
}

int main()
{
	int h;
	int x;

	h  = soma(5,2);
	mensagem_final();
	x  = multiplica(h, 4);

	printf("%d <--- resultado da soma e depois da multiplicacao.\n\n",x);
	return 0;
}