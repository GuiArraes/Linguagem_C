#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
14) Leia um vetor com 6 nomes e apresente o MAIOR e o MENOR nome do vetor 
(em quantidade de caracteres)
*/
char v1[6][20];
char menor[20] = "ZZZZZZZZZZZ", maior[20];

int main (){
    setlocale(LC_ALL,"portuguese");
    
    for (int i=0; i<6; i++){
        printf ("%d° nome: ",i+1);
        gets (v1[i]);
    }        
    for (int j=0; j<6; j++){
        if (strlen(menor) > strlen(v1[j])){
           strcpy (menor,v1[j]);
        }
        
        if (strlen (maior) < strlen(v1[j])){
           strcpy (maior, v1[j]);
        }
    }

    printf ("Maior palavra: %s \nMenor palavra: %s\n",maior, menor);
    
    system ("pause");
return 0;
}
