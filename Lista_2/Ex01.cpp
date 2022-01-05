#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//1) Ler 4 notas (entre 0 e 10), calcular a média e apresentar as mensagens
//“Aprovado” ou “Reprovado” conforme o resultado da média encontrada. 
// Para aprovação, a média deverá ser maior ou igual a 6.0.

float notas[4];
float media = 0;

int main (){
setlocale(LC_ALL,"portuguese");
    
    for (int x=0; x<=3;x++){
        do {
           printf ("%d° nota: ",x+1);
           scanf ("%f",&notas[x]);
        }while (notas[x]<0 || notas[x]>=10);
        media = media + notas[x];
    }
    media = media/4.0;  
    if (media >= 6.0){
       printf ("Aprovado \n");          
    } 
    else {
         printf ("Reprovado \n");
    }
system ("pause");
return 0;
}
