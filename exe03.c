//Leia um n�mero real, se o n�mero for positivo imprima a raiz quadrada
//do cotr�rio imprima o n�mero ao quadrado,
#include <stdio.h>
#include <math.h>

int main()
{
	float a;
	float r,qua;

	printf("Digite um n�mero:");
	fflush(stdout);
	scanf("%f", &a);

	if (a > 0)
	{
		r = sqrt(a);
		printf("A ra�z �:%.2f",r);
	}
	else
	{
		qua = a * a;
		printf("O quadrado desse n�mero �:%.1f", qua);
	}
}
