#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//27) Solicite uma frase a apresente-a ao contrário.
//A frase deverá ter no mínimo 10 caracteres.

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
