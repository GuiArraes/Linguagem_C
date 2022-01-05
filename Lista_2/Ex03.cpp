#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//3) Construa o mesmo programa acima, apresentando na vertical.

int notas[30];

int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int x=0; x<=29;x++){
        printf ("%d \n",x+1);  
    }
    printf ("\n");
system ("pause");
return 0;
}
