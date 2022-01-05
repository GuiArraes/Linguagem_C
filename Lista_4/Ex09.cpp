#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
9) Leia um vetor contendo 5 nomes
*/

char nome[5][15];

int main (){
    setlocale(LC_ALL,"portuguese");
    for (int i=0; i<5; i++){
        fflush(stdin);
        printf ("%d° nome: ",i+1);
        gets (nome[i]);    
    }

    system ("pause");
return 0;
}
