#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // fun��o strlen(char) - conta caracteres
                    //fun��o strcpy(char) - copia caracter

//27) Solicite uma frase a apresente-a ao contr�rio.
//A frase dever� ter no m�nimo 10 caracteres.

char frase[50];

int main (){
    setlocale(LC_ALL, "portuguese");
    do{
       printf ("Digite uma frase: ");
       gets(frase);
    }while (strlen(frase)<=10);
    printf ("%d \n",strlen(frase));
    for (int x=strlen(frase); x>=0;x--){
        printf ("%c",frase[x]);
    }
    printf ("\n\n");
     
system ("pause");

return 0;
}
