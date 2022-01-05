#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//16) Solicite uma palavras (mínimo 4 caracteres) e
//apresente apenas as VOGAIS (maiúsculas ou minúsculas)

char palavra[11];
const char vogais[11] = "aeiouAEIOU";

int main (){
    printf ("%c",vogais);
    do{
       printf ("Digitem uma palavra: ");
       gets (palavra);
    }while (strlen(palavra) < 4);
    
    for (int x=0; x<=(strlen(palavra));x++){ // Percorre o vetor da palavra
        for (int y=0; y<=10; y++){           // Percorre o vetor das vogais   
            if (palavra[x] == vogais[y]){    // Analisa de tem vogal na palavra
               printf ("%c \n",palavra[x]);
            }
        }            
    }
system ("pause");
return 0;
