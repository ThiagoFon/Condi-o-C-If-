#include <stdio.h>

/*
09.
Leia um salário de um trabalhador e o valor da prestação
de um empréstimo. Se a prestação for maior que 20% do salário
imprima: "Empréstimo não concedido, " caso contrário
imrpima: "Empréstimo concedido".

*/

int main()
{
	float salary, installment, percent;

	printf("Enter your salary:");
	fflush(stdout);
	scanf("%f", &salary);

	printf("Enter your installment:");
	fflush(stdout);
	scanf("%f", &installment);

	percent = 0.2 * salary;

	if ( installment > percent )
	{
		printf("LOAN NOT GRANTED");
	}
	else
	{
		printf("LOAN GRANTED");
	}

	return 0;
}
