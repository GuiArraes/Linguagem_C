#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter
//30) Fa�a um Programa em linguagem C que receba um n�mero e diga se est� no intervalo entre 100 e 200.

float num;

int main (){
    setlocale(LC_ALL, "portuguese");
    
    printf ("Digite um valor: ");
    scanf ("%f",&num);
    
    if (num>=100 && num<=200){
       printf ("\n%.0f esta entre 100 e 200 \n\n",num);
    }else{
       printf ("\n%.0f n�o esta entre 100 e 200 \n\n",num);   
    }
      
system ("pause");

return 0;
}
