#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//16) Solicite uma palavras (m�nimo 4 caracteres) e
//apresente apenas as VOGAIS (mai�sculas ou min�sculas)

int num;
int cont;

int main (){
    do{
       printf ("Digitem um numero inteiro: ");
       scanf ("%d",&num);
    }while (num < 0);
    
    for (int x=1; x<=num;x++){
        if (num % x == 0){
           cont = cont + 1;
        }
    }
    if (cont == 2){
       printf ("\n%d numero PRIMO \n\n",num);
    }else{
       printf ("\n%d NAO PRIMO \n\n",num);   
    }

system ("pause");
return 0;
}
