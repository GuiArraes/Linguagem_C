#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//23) Escreva um Programa em linguagem C que solicite 3 n�meros
//e apresente o maior entre eles.

int num[3];
int maior;

int main (){
    setlocale(LC_ALL, "portuguese");
    maior = 0;
    for (int x=0; x<=2; x++){
        printf ("%d� n�mero: ",x+1);
        scanf ("%d",&num[x]);
        
        if (maior < num[x]){
           maior = num[x];
        }
    }
    printf ("O maior n�mero �: %d \n\n",maior);
    
system ("pause");

return 0;
}
