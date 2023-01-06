//Leia um número real, se o número for positivo imprima a raiz quadrada
//do cotrário imprima o número ao quadrado,
#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	float r,qua;

	printf("Digite um número:");
	fflush(stdout);
	scanf("%f", &a);

	if (a > 0)
	{
		r = sqrt(a);
		printf("A raíz é:%.2f",r);
	}
	else
	{
		qua = a * a;
		printf("O quadrado desse número é:%.1f", qua);
	}
}
