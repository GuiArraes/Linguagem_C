#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
10) Leia um vetor contendo 5 nomes e apresente-os em ordem contrária ao da entrada
*/

char nome[5][15];

int main (){
    setlocale(LC_ALL,"portuguese");
    for (int i=0; i<5; i++){
        fflush(stdin);
        printf ("%d° nome: ",i+1);
        gets (nome[i]);    
    }
    
    for (int i=0; i<5; i++){
        printf ("%s\n",nome[4-i]);
    }
    
    system ("pause");
return 0;
}
