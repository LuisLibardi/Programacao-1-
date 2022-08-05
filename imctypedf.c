#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float peso, altura;
}tipoIMC;

int main(){
	tipoIMC*imc;
	imc = malloc(sizeof(tipoIMC));
	
	printf("Qual o seu peso?\n");
	scanf("%f", &imc -> peso);
	
	printf("Me informe sua altura?\n");
	scanf("%f", &imc -> altura);
	
	printf("imc: %f\n",imc -> peso/pow (imc -> altura, 2));
}	

