#include <stdio.h>

typedef struct{
	char nome[20];
	int idade;
	float nota;
} tipo_aluno;

int i;

int main(){

tipo_aluno aluno[3];

for(i = 0; i < 3; i++)
{
	printf("nome do aluno %d:\n", i);
	scanf("%s", aluno[i].nome);
	printf("Idade do aluno:\n");
	scanf("%d", &aluno[i].idade);
	printf("Nota do aluno:\n");
	scanf("%f", &aluno[i].nota);
}	
for(i = 0; i < 3; i++)
	printf("Nome:%s idade:%d nota:%.2f\n", aluno[i].nome, aluno[i].idade, aluno[i].nota);
	
}

#include <stdio.h>
#include <stdlib.h>

int main(){
	int *n1, *n2, *soma;
	
	n1 = malloc(sizeof(int));
	n2 = malloc(sizeof(int));
	soma = malloc(sizeof(int));
	
	printf("Digite n1:");
	scanf("%d", n1);
	
	printf("Digite n2:");
	scanf("%d", n1);
	
	*soma = *n1 + *n2;
	
	printf("Valor da soma: %d", *soma);

}
