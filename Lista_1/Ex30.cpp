#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//30) Construa um algorítmo que leia e
//apresente o dobro da soma de 4 números fornecidos pelo usuário.

int n[4];
int soma;

int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int i=0;i<=3;i++){
              printf ("Digite %i° número: ",i+1);
              scanf ("%i",&n[i]);
              soma = soma + n[i];
      
        }
    printf ("\n O dobro da soma dos 4 números: %i \n",2*soma);    
    
system ("pause");
return 0;
}
