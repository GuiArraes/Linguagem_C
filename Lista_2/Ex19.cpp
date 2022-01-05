#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h> // função strlen(char) - conta caracteres
                    //função strcpy(char) - copia caracter

//19) Escrever um Programa em linguagem C que leia o nome de um aluno
//e as notas das três provas que ele obteve no semestre. No final,
//apresente o nome do aluno e a sua maior nota.

char nome[20];
float nota[4], maior;

int main (){
    setlocale (LC_ALL, "portuguese");
    
    printf ("Nome: ");
    gets (nome);
    for (int x=0; x<=2; x++){
        do{
           printf ("%d° Nota: ",x+1);
           scanf("%f",&nota[x]);
        }while ((nota[x]<0) || (nota[x]>10));
        if (maior < nota[x]){
           maior = nota[x];
        }  
    }
    printf ("\n%s tem como MAIOR nota %.2f \n\n",nome, maior);
    
system ("pause");

return 0;
}
