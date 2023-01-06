#include <stdio.h>

/*
06.
Escreva um programa que, dados dois números, mostre na tela o maior deles
assim como a diferença existente entre ambos.

*/

int main(){

	int a, b, i = 0;
	int sub;


	printf("Enter a number A[%d]:",( i + 1 ));
	fflush(stdout);
	scanf("%d", &a);

	printf("Enter a number B[%d]:", (i + 2));
	fflush(stdout);
	scanf("%d", &b);


	if (a > b){
		sub = a - b;
		printf("\nA is greater than B the difference of A and B is %d !", sub);

	}

	else{
		sub = b - a;
		printf("\nB is greater than A the difference of B and A is %d !", sub);
	}

	return 0 ;
}
