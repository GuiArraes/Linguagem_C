#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
12) Leia um vetor com 3 nomes (mínimo 5 caracteres) 
e apresente o 4º caractere do segundo nome.
*/

char nome[3][20];
bool flag;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    for (int i=0; i<3; i++){
        do {
            flag = false;
            printf ("%d° nome: ",i+1);
            gets (nome[i]);
            if (strlen (nome[i]) <5){
               flag = true;
            }
        }while (flag == true);        
    }
    
    printf ("O 4° caracter de %s: %c\n",nome[1], nome[1][3]);
  
    system ("pause");
return 0;
}
