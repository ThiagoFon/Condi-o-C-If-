#include <stdio.h>

/*
08.
Fa�a um programa que leia duas notas de um aluno, verifique se as notas
s�o v�lidas e exiba na tela a m�dia destas notas. Uma nota v�lida deve ser
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota
n�o possua um valor v�lido, este fato de ser informado ao usu�rio e o
programa termina.

*/

int main()
{
	float a, b, i = 0;
	float average;

	printf("Student grade[%.0f]:", ( i + 1));
	fflush(stdout);
	scanf("%f", &a);

	printf("Student grade[%.0f]:", ( i + 2));
	fflush(stdout);
	scanf("%f", &b);

	average = (a + b) / 2 ;

	if ( a > 10.0 || b > 10.0)
	{
		printf("\nINVALID GRADES!");
	}

	else
	{
		printf("\nGRADE POINT AVERAGE: %.1f", average);
	}
	return 0;
}
