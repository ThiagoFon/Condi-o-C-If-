//Leia um número e mostre caso ele seja positivo.
//O número digitado ao quadrado.
//A raíz quadrada digitada.

#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int r, qua;

	printf("Digite um número:");
	fflush(stdout);
	scanf("%d", &a);

	if (a > 0)
	{
		r = sqrt(a);
		printf("A raíz quadrada desse número é:%d\n", r);
	}
	if (a > 0)
	{
		qua = a * a;
		printf("O número ao quadrado é:%d\n", qua);
	}
}
