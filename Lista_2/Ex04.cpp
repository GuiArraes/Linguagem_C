#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// 4) Fa�a um programa que apresente todos os n�meros pares entre 1 e 50
// utilizando o FOR

int main (){
    for (int x=1; x<=50; x++){
        if (x % 2 == 0){
           printf ("%d \n",x);
        }   
    }
system ("pause");
return 0;
}
