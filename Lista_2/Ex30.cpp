#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter
//30) Faça um Programa em linguagem C que receba um número e diga se está no intervalo entre 100 e 200.

float num;

int main (){
    setlocale(LC_ALL, "portuguese");
    
    printf ("Digite um valor: ");
    scanf ("%f",&num);
    
    if (num>=100 && num<=200){
       printf ("\n%.0f esta entre 100 e 200 \n\n",num);
    }else{
       printf ("\n%.0f não esta entre 100 e 200 \n\n",num);   
    }
      
system ("pause");

return 0;
}
