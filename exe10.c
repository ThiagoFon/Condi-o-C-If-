#include <stdio.h>

/*
10.
Faça um programa que receba a altura e o sexo de uma pessoa e calcule
e mostre seu peso ideal, utilizando as seguintes fórmulas
(onde h corresponde à altura):

* Men : (72.7 * h) -58
* Women : (62,1 * h) -44,7

*/

int main()
{
	float height, weight, imc;

		printf("Enter your weight:");
		fflush(stdout);
		scanf("%f", &weight);

		printf("Enter your height:");
		fflush(stdout);
		scanf("%f", &height);

		imc = weight / (height * height) ;

		printf("\nResult = %.1f", imc);

		if (imc < 18.5){
			printf("\nunderweight");
		}
		if (imc > 18.5 && imc < 24.9){
			printf("\nnormal weight");
		}
		if (imc > 25.0 && imc < 29.9){
			printf("\noverweight");
		}
		if( imc > 30.0 && imc < 34.9){
			printf("\nclass 1 obesity");
		}
		if(imc > 35.0 && imc < 39.9){
			printf("\nclass 2 obesity");
		}
		if(imc >= 40.0){
			printf("\nclass 3 obesity");
		}

	return 0;
}
