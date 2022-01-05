#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//29) Construa um algoritmo que leia e 
//apresente a soma de 10 números fornecidos pelo usuário.

int n[10];
int soma;

int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int i=0;i<=9;i++){
              printf ("Digite %i° número: ",i+1);
              scanf ("%i",&n[i]);
              soma = soma+n[i];     
        }
    printf ("\n A soma dos 10 números é: %i \n\n",soma);    
    
system ("pause");
return 0;
}
