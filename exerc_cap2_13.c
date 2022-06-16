#include <stdio.h>

int main(){

float media, prova1, prova2;
char nome[100];

printf("Me informe o nome do aluno:");
scanf("%s", &nome);

printf("Me informe a nota da primeira prova:");
scanf("%f",&prova1);

printf("Me informe a nota da segunda prova:");
scanf("%f",&prova2);

media = (prova1 + prova2) / 2;

printf("Aluno:%s\n", nome);

printf("Nota Prova 1:%.2f Prova 2:%.2f\n", prova1, prova2);

printf("Media das provas:%.2f\n", media);

if (media >= 7)
printf("Parabens, voce foi aprovado!");

else if (media >= 3)
printf("Tera que fazer a prova final");

else

printf("\nInfelizmente esta reprovado");

printf("\nFim");

}  
