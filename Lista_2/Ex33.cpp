#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
33) Construa um Programa em linguagem C que solicite dois valores inteiros
e apresente a produto de um pelo outro sem no entanto utilizar
o operador aritm�tico de multiplica��o.
*/

int a, b, mult;

int main (){
    setlocale(LC_ALL,"portuguese");  
    
    printf ("Digite um n�mero: ");
    scanf ("%d",&a);   
    printf ("Digite outro n�mero: ");
    scanf ("%d",&b);
    
    mult = 0;
    for (int x=1; x<=a; x++){
        mult = mult + b;
    }
    printf ("\n%d*%d = %d\n\n",a, b, mult);
    
system ("pause");
return 0;
}
