#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
31) Escrever um Programa em linguagem C que leia o nome e as três notas obtidas
por um aluno durante o semestre. Calcular a sua média (aritmética), informar
o nome e sua menção aprovado (media >= 7), Reprovado (media <= 5) e 
Recuperação (media entre 5.1 a 6.9).
*/

char nome[20];
float nota[3], media;

int main (){
    setlocale(LC_ALL,"portuguese");
    
    media = 0;
    printf ("Nome: ");
    gets(nome);
    for (int i=0; i<=2;i++){
        do{
           printf ("%d° nota: ",i+1);
           scanf ("%f",&nota[i]);
        }while ((nota[i] < 0) || (nota[i] > 10));
        
        media = media + nota[i]; //Somando as notas
    }
    media = media/3; //Media das notas

    if (media >= 7.0){
       printf ("%s APROVADO \n",nome);     
    }else if (media <= 5.0){
       printf ("%s REPROVADO \n",nome);   
    }else{
       printf ("%s RECUPERAÇÃO \n",nome);   
    }

system ("pause");
return 0;
}
