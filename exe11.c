#include <stdio.h>

/*

11.
Escreva um programa que leia um número inteiro maior do que zero
e devolva. na tela, a soma de todos os seus algorismo. Por exemplo
ao número 251 corresponderá o valor 8 (2 + 5 + 1). Se o número lido
não for maior do que zero, o programa terminará com a mensagem
"Número inválido".

*/



int main()

{

   int num,soma=0;

   printf("Enter a number:");
   fflush(stdout);
   scanf("%d",&num);

   if(num>0){

       while(num>0){

       soma=soma+num%10;

       num=num/10;

       }

       printf("The sum of the digits is:%d", soma);

   }else{

       printf("Invalid number");

   }

   return 0;

}
