#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//23) Escreva um Programa em linguagem C que solicite 3 números
//e apresente o maior entre eles.

int num[3];
int maior;

int main (){
    setlocale(LC_ALL, "portuguese");
    maior = 0;
    for (int x=0; x<=2; x++){
        printf ("%d° número: ",x+1);
        scanf ("%d",&num[x]);
        
        if (maior < num[x]){
           maior = num[x];
        }
    }
    printf ("O maior número é: %d \n\n",maior);
    
system ("pause");

return 0;
}
