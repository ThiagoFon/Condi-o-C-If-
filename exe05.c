//fa�a um programa que receba um n�mero inteiro e verifique.
//se este n�mero � impar ou par.

#include <stdio.h>

int main()
{
	int a;

	printf("Digite um n�mero:");
	fflush(stdout);
	scanf("%d", &a);

	if (a % 2 == 0)
	{
		printf("O valor digitado � par:");
	}
	else
	{
		printf("O valor digitado � �mpar:");
	}
}
