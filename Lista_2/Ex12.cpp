#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//12) Solicite dois valores inteiros e apresente o resto da
// divisão por 3 referente a soma dos mesmos.

int n1, n2;

int main (){

    printf ("Digite um número inteiro: ");
    scanf ("%d", &n1);
    printf ("Digite um número inteiro: ");
    scanf ("%d", &n2);
    
    printf ("O resto da divisão \n");
    printf ("(%d+%d)/3 = %d \n",n1, n2, (n1+n2)%3);

system ("pause");
return 0;
}
