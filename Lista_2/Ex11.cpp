#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//11) Fa�a um programa que solicite uma frase e apresente
// o valor ASCI de cada um dos caracteres

char frase [50], letras [50];
int cont;

int main (){

    printf ("Digite uma frase: \n");
    gets (frase);
    cont = strlen (frase);
    
    for (int x=0; x<=cont-1; x++){
        printf ("%d\n",frase[x]);
    }

system ("pause");
return 0;
}
