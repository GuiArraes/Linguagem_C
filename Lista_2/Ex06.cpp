#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//6) Faça um programa que apresente os números no intervalo de X e Y, 
//sendo que estas variáveis serão solicitadas ao usuário e obrigatoriamente
//o Y deverá ser maior que X em ao menos 5 unidades.

int x, y;
int main (){
      
    printf ("Digite um numero: ");
    scanf ("%d",&x);
    while (y < x+5){
          if (y != NULL){
             printf ("Valor invalido, tente novamente!!! \n");
          }
          printf ("Digite outro número: ");
          scanf ("%d",&y);
    }
    for (x;x<=y;x++){
        printf ("%d \n",x);    
    }
system ("pause");
return 0;
}
