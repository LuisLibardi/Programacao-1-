#include <stdio.h>

int main(){
 
 int num;
 char nome[100];
 float aliquota, salario;

 for (num = 1; num <= 5; num++) {
 	
 	printf("Me informe o nome:\n");
 	
 	fflush(stdin);
 	
 	fgets(nome, 100, stdin);
	
	printf("Digite o valor do salrio:\n");
 	scanf("%f", &salario);
 
 if (salario <= 1300) {
 	printf("Isento de imposto \n");
 }
 else {
 
 if (salario <= 2300) {

 	aliquota = (salario*10) / 100;
 }
 
 else {
 
 aliquota = (salario*15) / 100;
 
 	printf("Aliquota:%f\n", aliquota);
 }
 	}
 		}
 			}
