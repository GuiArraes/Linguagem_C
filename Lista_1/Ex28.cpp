#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//27) Sendo dado dois números (positivos) pelo usuário, apresente a décima parte
//da subtração de um pelo outro, utilizando uma terceira variável.

//28) Baseado no exercício anterior, 
//faça o mesmo processo sem fazer uso de uma terceira variável.

int n[2];

int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int i=0;i<=1;i++){
        while (n[i] <= 0){
              printf ("Digite %i° número: ",i+1);
              scanf ("%i",&n[i]);
              }        
        }
    printf ("\n (%i-%i)/10 = %.2f \n\n",n[0],n[1],(n[0]-n[1])/10.0);    
    
system ("pause");
return 0;
}
