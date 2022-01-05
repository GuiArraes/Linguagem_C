#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//5) Faça um programa que apresente todos os números ímpares entre 1 e 50 
//utilizando o WHILE

int main (){
    int x;
    while (x<=50){
        if (x % 2 == 0){
           printf ("%d \n",x);
        }
    x++;   
    }
system ("pause");
return 0;
}
