#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//25) A Loja Mam�o com A��car est� vendendo seus produtos em 5 (cinco)
//presta��es sem juros. Fa�a um Programa em linguagem C que receba um valor
//de uma compra e mostre o valor das presta��es.

float valor;

int main (){
    setlocale(LC_ALL, "portuguese");
    printf ("Valor do produto: ");
    scanf ("%f",&valor);
    
    for (int x=1; x<=5;x++){
        printf ("%d� presta��o: %.2f \n",x, valor/5);
    }
     
system ("pause");

return 0;
}
