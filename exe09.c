#include <stdio.h>

/*
09.
Leia um sal�rio de um trabalhador e o valor da presta��o
de um empr�stimo. Se a presta��o for maior que 20% do sal�rio
imprima: "Empr�stimo n�o concedido, " caso contr�rio
imrpima: "Empr�stimo concedido".

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
