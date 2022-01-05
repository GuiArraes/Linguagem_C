#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
33) Construa um Programa em linguagem C que solicite dois valores inteiros
e apresente a produto de um pelo outro sem no entanto utilizar
o operador aritmético de multiplicação.
*/

int a, b, mult;

int main (){
    setlocale(LC_ALL,"portuguese");  
    
    printf ("Digite um número: ");
    scanf ("%d",&a);   
    printf ("Digite outro número: ");
    scanf ("%d",&b);
    
    mult = 0;
    for (int x=1; x<=a; x++){
        mult = mult + b;
    }
    printf ("\n%d*%d = %d\n\n",a, b, mult);
    
system ("pause");
return 0;
}
