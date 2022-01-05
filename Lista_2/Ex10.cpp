#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//10) Faça um programa que solicite uma palavras (mínimo de 10 caracteres)
//e apresente cada um destes caracteres na vertical

char frase [50], letras [50];
int cont;

int main (){

    do{
    printf ("Digite uma frase: \n");
    gets (frase);
    cont = strlen (frase);
    }while (cont <= 10);
    
    for (int x=0; x<=cont; x++){
        printf ("%c\n",frase[x]);
    }

system ("pause");
return 0;
}
