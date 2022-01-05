#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
13) Leia um vetor com 6 nomes (V1) e preencha um segundo vetor (V2) contendo
 apenas nomes com menos de 10 caracteres. Apresente V2 no final.
*/

char v1[6][20], v2[6][20];
int y;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    y=0;
    for (int i=0; i<6; i++){
        printf ("%d° nome: ",i+1);
        gets (v1[i]);
        if (strlen (v1[i])<10){
           strcpy(v2[y],v1[i]);
           y++;
        }       
    }
    for (int i=0; i<y; i++){
        printf ("%s\n",v2[i]);
    }
  
    system ("pause");
return 0;
}
