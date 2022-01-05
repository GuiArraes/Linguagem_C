#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//28) O custo ao consumidor de um carro novo � a soma do custo de f�brica
//com a percentagem do distribuidor e dos impostos (aplicados,
//primeiro os impostos sobre o custo de f�brica, e depois a percentagem
//do distribuidor sobre o resultado). Os impostos totalizam aproximadamente 38%
//(IPI, ICMS, PIS, COFINS, etc) e a percentagem do distribuidor 
//aproximadamente 28% sobre o custo do ve�culo. Escreva um Programa
//em linguagem C que leia o custo de f�brica de um carro e informe 
//o custo final ao consumidor.

float valor, venda, imp;

int main (){
    setlocale(LC_ALL, "portuguese");
    do{
       printf ("Custo do carro: ");
       scanf ("%f",&valor);
    }while (valor < 0);
    
    imp = valor + (valor*0.38); //Imposto
    venda = imp + (imp*0.28); //"Lucro"
    
    printf ("\nO valor de venda do carro: %.2f\n",venda);
    printf ("Total de impostos %.2f\n",imp-valor);
    printf ("Ganho da f�brica %.2f\n\n",venda-imp);
     
system ("pause");

return 0;
}
