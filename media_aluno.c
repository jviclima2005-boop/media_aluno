#include <stdio.h>
#include <string.h>

int main(){

char nome[30];
int idade;
float nota1,nota2;
char analise[30];

printf("Digite seu nome:");
fgets(nome, 30,stdin);

printf("Digite sua idade: ");
scanf("%d", &idade);

printf("Digite sua nota N1:");
scanf("%f", &nota1);

printf("Digite sua nota N2:");
scanf("%f", &nota2);

float media = (nota1 + nota2)/2;


if(media >= 7){
  strcpy(analise, "aprovado");
}else{
  strcpy(analise, "reprovado");
}


printf("Nome: %s", nome);
printf("Idade: %d\n", idade);
printf("Nota 1: %.2f\n", nota1);
printf("Nota 2: %.2f\n", nota2);
printf("Media: %.2f\n", media);
printf("Analise: %s", analise);

    return 0;
}