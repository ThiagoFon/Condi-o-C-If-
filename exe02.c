//Leia um n�mero fornecido pelo usu�rio.
//se o n�mero for positivo, calcule a raiz quadrada.
//se for negativo digite uma mensagem "n�mero invalido".

#include <stdio.h>
#include <math.h> //permite usar fun��es matem�ticas b�sicas, tais como senos, cossenos, exponenciais, logar�tmos, etc.

int main()
{
	float a;
	float r;

	printf("Digite um n�mero:");
	fflush(stdout);
	scanf("%f", &a);

	if ( a > 0)
	{
		r = sqrt(a);
		printf("A ra�z �:%.2f",r);
	}
	else
	{
		printf("N�mero inv�lido:");
	}
}
