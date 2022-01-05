#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
/*
34) Desenvolva um Programa em linguagem C que solicite 4 notas, 
a carga horária total da disciplina e a quantidade de presenças do aluno. 
Apresente a mensagem “APROVADO” ou “REPROVADO”, sendo que o critério de 
aprovação é media mínima 6,0 e frequência mínima 75%. 
Faça este procedimento para uma turma de 35 alunos.
*/

int nota[4], hora, freq;
double media, freqAula;

int main (){
    setlocale(LC_ALL,"portuguese");  
    media = 0;
    for (int i=0; i<=3; i++){
        do{
           printf ("%d° Nota: ",i+1);
           fflush(stdin);
           scanf ("%d",&nota[i]);
        }while (nota[i] < 0.0 || nota[i] > 10.0);
        media = media + nota[i]; //Soma
    }
    media = media/4; //Média
    
    printf ("Frequência do aluno: ");
    fflush(stdin);
    scanf ("%d",&freq);
    printf ("\nCarga horária da disiplina: ");
    fflush(stdin);
    scanf ("%d",&hora);
    
    freqAula = (freq/hora);
    
    if (media >= 6.0 && freqAula >= 75.0/100.0){
       printf ("\n\nAluno APROVADO\n\n");
    }else{
       printf ("\n\nAluno REPROVADO\n\n");  
    }   
system ("pause");
return 0;
}
