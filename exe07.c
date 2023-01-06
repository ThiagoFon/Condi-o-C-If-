#include <stdio.h>

/*
07.
Faça um programa que receba dois números inteiros e mostre o maior.
Se por acaso, os dois números forem iguais, imprima a mensagem
"Números iguais."


*/

int main(){

	int a, b, i = 0;

	printf("Enter a number A[%d]:", ( i + 1 ));
	fflush(stdout);
	scanf("%d", &a);

	printf("Enter a number B[%d]:", ( i + 2 ));
	fflush(stdout);
	scanf("%d", &b);

	if( a == b )
	{
		printf("\nEQUAL NUMBERS ");
	}
	else
	{
		printf("\nNUMBERS ARE NOT EQUAL");
	}
	return 0;
}
