#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//8) Faça um Programa em linguagem C que receba dois números e exiba o resultado da sua soma.

int n1, n2;

int main (){
    printf ("Digite um valor inteiro: ");
    scanf ("%d",&n1);
    printf ("Digite um valor inteiro: ");
    scanf ("%d",&n2);   
  
    printf ("%d + %d = %d \n",n1, n2, n1+n2);
system ("pause");
return 0;
}
