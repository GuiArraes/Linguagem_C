#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//26) Faça um Programa em linguagem C que receba o preço de custo de um produto
//e mostre o valor de venda. Sabe-se que o preço de custo receberá um 
//acréscimo de acordo com um percentual informado pelo usuário.

float valor, newValor, marg;

int main (){
    setlocale(LC_ALL, "portuguese");
    printf ("Valor de custo do produto: ");
    scanf ("%f",&valor);
    printf ("Margem de ganho do produto (%%): ");
    scanf ("%f",&marg);
    
    newValor = valor + (valor*marg)/100;
    
    printf ("\nValor de venda do produto: %.2f \n\n",newValor);
    
     
system ("pause");

return 0;
}
