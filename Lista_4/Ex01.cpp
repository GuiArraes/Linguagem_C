#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*1) Construir um programa que Leia um vetor de 10 elementos
 e posteriormente apresente a soma dos mesmos;
*/

int num[10];
int soma;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    soma = 0;
    for (int i=0; i<10; i++){
        fflush(stdin);
        printf ("%d° numero: ",i+1);
        scanf ("%d",&num[i]);
        soma = soma + num[i];
    } 
    
    printf ("\n\nSOMA = %d\n\n",soma);  
    system ("pause");
return 0;
}
