#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//18) Escrever um Programa em linguagem C que leia o nome de um vendedor,
//o seu salário fixo e o valor total de vendas efetuadas por ele no mês.
//Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas,
//apresente no final o nome, o salário fixo e a comissão.

char nome[20];
float salario, venda;

int main (){
    printf ("Nome: ");
    gets (nome);
    printf ("Salario fixo: ");
    scanf ("%f",&salario);
    printf ("Total vendido por %s no mes: ",nome);
    scanf ("%f",&venda);
    
    salario = salario + venda*0.15;
    
    printf ("\nO salario do(a) %s é de %.2f \n\n",nome, salario);
      
system ("pause");

return 0;
}
