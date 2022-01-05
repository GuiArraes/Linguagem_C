#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//13) Faça um Programa em linguagem C que receba dois números e ao final
//mostre a soma, subtração, multiplicação e a divisão dos números lidos,
//entre o primeiro e o segundo.

float n1, n2;

int main (){

    printf ("Digite um número: ");
    scanf ("%f", &n1);
    printf ("Digite um número: ");
    scanf ("%f", &n2);
    
    printf ("%.0f+%.0f = %.0f \n",n1, n2, n1+n2);
    printf ("%.0f-%.0f = %.0f \n",n1, n2, n1-n2);
    printf ("%.0f*%.0f = %.0f \n",n1, n2, n1*n2);
    printf ("%.0f/%.0f = %.2f \n",n1, n2, n1/n2);

system ("pause");
return 0;
}
