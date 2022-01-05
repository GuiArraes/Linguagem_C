#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//7) Solicite um valor inteiro e apresente se este é PAR ou IMPAR

int n;

int main (){
    printf ("Digite um valor inteiro: ");
    scanf ("%d",&n);
    if (n % 2 == 0){
       printf ("%d e PAR \n",n);      
    }     
    else{
       printf ("%d e IMPAR \n",n);  
    }
system ("pause");
return 0;
}
