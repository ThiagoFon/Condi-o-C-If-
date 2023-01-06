//faça um programa que receba um número inteiro e verifique.
//se este número é impar ou par.

#include <stdio.h>

int main()
{
	int a;

	printf("Digite um número:");
	fflush(stdout);
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("O valor digitado é par:");
	}
	else
	{
		printf("O valor digitado é ímpar:");
	}
}
