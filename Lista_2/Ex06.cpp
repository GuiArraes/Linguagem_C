#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//6) Fa�a um programa que apresente os n�meros no intervalo de X e Y, 
//sendo que estas vari�veis ser�o solicitadas ao usu�rio e obrigatoriamente
//o Y dever� ser maior que X em ao menos 5 unidades.

int x, y;
int main (){
      
    printf ("Digite um numero: ");
    scanf ("%d",&x);
    while (y < x+5){
          if (y != NULL){
             printf ("Valor invalido, tente novamente!!! \n");
          }
          printf ("Digite outro n�mero: ");
          scanf ("%d",&y);
    }
    for (x;x<=y;x++){
        printf ("%d \n",x);    
    }
system ("pause");
return 0;
}
