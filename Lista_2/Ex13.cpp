#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//13) Fa�a um Programa em linguagem C que receba dois n�meros e ao final
//mostre a soma, subtra��o, multiplica��o e a divis�o dos n�meros lidos,
//entre o primeiro e o segundo.

float n1, n2;

int main (){

    printf ("Digite um n�mero: ");
    scanf ("%f", &n1);
    printf ("Digite um n�mero: ");
    scanf ("%f", &n2);
    
    printf ("%.0f+%.0f = %.0f \n",n1, n2, n1+n2);
    printf ("%.0f-%.0f = %.0f \n",n1, n2, n1-n2);
    printf ("%.0f*%.0f = %.0f \n",n1, n2, n1*n2);
    printf ("%.0f/%.0f = %.2f \n",n1, n2, n1/n2);

system ("pause");
return 0;
}
