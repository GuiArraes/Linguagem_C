#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//20) Ler dois valores para as vari�veis A e B, e efetuar as trocas dos valores
//de forma que a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B
//passe a possuir o valor da vari�vel A. Apresentar os valores trocados.

float a, b, tmp;

int main (){
    printf ("Valor de a: ");
    scanf ("%f",&a);
    printf ("Valor de b: ");
    scanf ("%f",&b);
    
    tmp = b;
    b = a;
    a = tmp;
    
    printf ("\nO valor trocado de a = %.2f\n",a);
    printf ("\nO valor trocado de b = %.2f\n\n",b);
    
system ("pause");

return 0;
}
