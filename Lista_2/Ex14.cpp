#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//14) Solicite uma frase qualquer (m�nimo 5 caracteres) 
//a presente todos os caracteres que estiverem na posi��o �mpar.

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
