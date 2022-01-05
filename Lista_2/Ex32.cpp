#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
32) Faça um Programa em linguagem C que receba o número do mês e mostre o mês
correspondente. Valide mês inválido entre 1 e 12.
*/

int num;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    do{
       printf ("Digite um número: ");
       scanf ("%d",&num);   
    }while (num < 1 || num > 12);
    
    switch (num){
           case 1: printf ("\nJaneiro\n\n");break;
           case 2: printf ("\nFevereiro\n\n");break;
           case 3: printf ("\nMarço\n\n");break;
           case 4: printf ("\nAbriu\n\n");break;
           case 5: printf ("\nMaio\n\n");break;
           case 6: printf ("\nJunho\n\n");break;
           case 7: printf ("\nJulho\n\n");break;
           case 8: printf ("\nAgosto\n\n");break;
           case 9: printf ("\nSetembro\n\n");break;
           case 10: printf ("\nOutubro\n\n");break;
           case 11: printf ("\nNovembro\n\n");break;
           case 12: printf ("\nDezembro\n\n");break;
    }  
    
system ("pause");
return 0;
}
