//Leia um n�mero e mostre caso ele seja positivo.
//O n�mero digitado ao quadrado.
//A ra�z quadrada digitada.

#include <stdio.h>
#include <math.h>

int main()
{
	int a;
	int r, qua;

	printf("Digite um n�mero:");
	fflush(stdout);
	scanf("%d", &a);

	if (a > 0)
	{
		r = sqrt(a);
		printf("A ra�z quadrada desse n�mero �:%d\n", r);
	}
	if (a > 0)
	{
		qua = a * a;
		printf("O n�mero ao quadrado �:%d\n", qua);
	}
}
