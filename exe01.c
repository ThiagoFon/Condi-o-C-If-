//Fa�a um programa que receba dois n�meros e imprima
//qual deles � o maior.

#include <stdio.h>

int main()
{
	int a;
	int b;

	printf("Digite um valor A:" );
	fflush(stdout);
	scanf("%d", &a);

	printf("Digite um valor B:" );
	fflush(stdout);
	scanf("%d", &b);

	if (a > b)
	{
		printf("o valor de A � maior do que o valor de B\n");
	}
	else
	{
		printf("O valor de B � maior do que valor de A\n");
	}

	if (a > b)
	{
	printf("O maior valor �:%d\n" ,a);
	}
	else
	{
	printf("O maior valor �:%d\n" ,b);
	}
	return 0;
}
