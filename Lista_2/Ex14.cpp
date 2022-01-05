#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//14) Solicite uma frase qualquer (mínimo 5 caracteres) 
//a presente todos os caracteres que estiverem na posição ímpar.

char frase[20];
int cont;

int main (){

    printf ("Digite uma frase: \n");
    gets (frase);
    cont = strlen(frase);
    
    for (int x=0;x<=cont-1;x++){
        if (x % 2 != 0){
           printf ("%d %c \n",x, frase[x]);
        }
    }

system ("pause");
return 0;
}
