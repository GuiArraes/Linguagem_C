#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//26) Informado 3 números (maiores que 10),
//apresente a soma do primeiro com o terceiro, multiplicando pelo segundo.

int n[3];
int i, resp;
int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int i=0;i<=2;i++){
        while (n[i] < 10){
              printf ("Digite %i° número: ",i+1);
              scanf ("%i",&n[i]);
              }        
        }
    resp = (n[0]+n[2])*n[1];
    printf ("\n (%i+%i)x%i = %i \n",n[0],n[2],n[1],resp);    
    
system ("pause");
return 0;
}
