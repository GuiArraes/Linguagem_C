#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//18) Escrever um Programa em linguagem C que leia o nome de um vendedor,
//o seu sal�rio fixo e o valor total de vendas efetuadas por ele no m�s.
//Sabendo que este vendedor ganha 15% de comiss�o sobre suas vendas efetuadas,
//apresente no final o nome, o sal�rio fixo e a comiss�o.

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
    
    printf ("\nO salario do(a) %s � de %.2f \n\n",nome, salario);
      
system ("pause");

return 0;
}
