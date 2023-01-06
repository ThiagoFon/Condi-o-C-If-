//Leia um número fornecido pelo usuário.
//se o número for positivo, calcule a raiz quadrada.
//se for negativo digite uma mensagem "número invalido".

#include <stdio.h>
#include <math.h> //permite usar funções matemáticas básicas, tais como senos, cossenos, exponenciais, logarítmos, etc.

int main()
{
	float a;
	float r;

	printf("Digite um número:");
	fflush(stdout);
	scanf("%f", &a);

	if ( a > 0)
	{
		r = sqrt(a);
		printf("A raíz é:%.2f",r);
	}
	else
	{
		printf("Número inválido:");
	}
}
