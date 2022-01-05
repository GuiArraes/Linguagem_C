#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

char nome[20];
char sexo;
float salario;
int id;

//MS Sans Serif

int main (){
    setlocale(LC_ALL,"portuguese");
    
    printf ("Nome: ");
    fflush(stdin);
    gets (nome);

    while ((sexo != 'M') && (sexo != 'm') && (sexo != 'F') && (sexo != 'f')){
       fflush(stdin);
       printf ("Sexo: ");
       scanf("%c",&sexo);
    }
    
    fflush(stdin);
    printf ("Salario: ");
    scanf ("%f",&salario);
    
    fflush(stdin);
    printf ("Idade: ");
    scanf ("%d",&id);
    
    if (sexo == 'M' || sexo == 'm'){
       if (id >= 18 && id <= 30)
       {
              if (salario >= 800 && salario <= 1120)
              {
                 salario = salario + salario*0.07;
              }                
       }else if (id >=31 && id <=50){
                 salario = salario + salario*0.09;
       }else{    //Para menores de 18 anos e maiores de 51 anos (Homens)
                 salario = salario + salario*0.115;    
       }
    }else  //Se não for Homem (M m), logo, será Mulher (F f)
    {
       if (id >= 18 && id <= 30)
       {
              if (salario >=800 && salario <= 1050)
              {
                 salario = salario + salario*0.075;
              }
       }else 
       {
            salario = salario + salario*0.116;      
       }
    }
    
    printf ("O novo salario do(a) %s é de %f |\n\n",nome, salario);
   
system ("pause");
return 0;
}
