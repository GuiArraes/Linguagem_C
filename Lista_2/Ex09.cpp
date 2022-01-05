#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//9) Desenvolva um Programa em linguagem C que solicite 2 números
//(diferentes) e apresente o maior deles.

int x, y;

int main (){
    printf ("Digite um valor inteiro: ");
    scanf ("%d",&x);
    do {
       printf ("\nDigite outro valor inteiro: ");
       scanf ("%d",&y);
    }while (y == x);
    
    if (x > y){
       printf ("%d e o maior \n",x);       
    }
    else{
       printf ("%d e o maior \n",y);   
    }

system ("pause");
return 0;
}
