#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//12) Solicite dois valores inteiros e apresente o resto da
// divis�o por 3 referente a soma dos mesmos.

int n1, n2;

int main (){

    printf ("Digite um n�mero inteiro: ");
    scanf ("%d", &n1);
    printf ("Digite um n�mero inteiro: ");
    scanf ("%d", &n2);
    
    printf ("O resto da divis�o \n");
    printf ("(%d+%d)/3 = %d \n",n1, n2, (n1+n2)%3);

system ("pause");
return 0;
}
