#include <stdio.h>

/*
08.
Faça um programa que leia duas notas de um aluno, verifique se as notas
são válidas e exiba na tela a média destas notas. Uma nota válida deve ser
obrigatoriamente, um valor entre 0.0 e 10.0, onde caso a nota
não possua um valor válido, este fato de ser informado ao usuário e o
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
