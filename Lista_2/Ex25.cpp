#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//25) A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco)
//prestações sem juros. Faça um Programa em linguagem C que receba um valor
//de uma compra e mostre o valor das prestações.

float valor;

int main (){
    setlocale(LC_ALL, "portuguese");
    printf ("Valor do produto: ");
    scanf ("%f",&valor);
    
    for (int x=1; x<=5;x++){
        printf ("%d° prestação: %.2f \n",x, valor/5);
    }
     
system ("pause");

return 0;
}
