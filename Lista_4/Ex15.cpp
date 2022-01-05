#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
/*
15) Leia um vetor com 6 nomes e apresente o MAIOR e o MENOR nome do vetor 
(quanto a ordem alfabética)
*/
char v1[6][20], back[6][20];
char menor[20] = "ZZZZZZZZZZZ", maior[20];

int main (){
    setlocale(LC_ALL,"portuguese");
    
    for (int i=0; i<6; i++){
        printf ("%d° nome: ",i+1);
        gets (v1[i]);
    }
    for (int i=0; i<6; i++){
        for (int j=0; j<20; j++){
            back[i][j] = toupper (v1[i][j]);
        }    
    }       
    for (int j=0; j<6; j++){
        if (strcmp(menor, back[j]) > 0){
           strcpy (menor,back[j]);
        }
        
        if (strcmp(maior, back[j]) < 0){
           strcpy (maior, back[j]);
        }
    }

    printf ("Maior palavra: %s \nMenor palavra: %s\n",maior, menor);
    
    system ("pause");
return 0;
}
