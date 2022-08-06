#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
	float peso, altura;
}tipoIMC;

float calc_imc(tipoIMC*imc){	
	float resultado;
	resultado = imc -> peso/pow(imc -> altura, 2);
	printf("%f\n", resultado);
	return resultado;
}

int main(){
	tipoIMC*imc;
	float resultado;
	
	imc = malloc(sizeof(tipoIMC));

	
	printf("Qual o seu peso?\n");
	scanf("%f", &imc -> peso);
	
	printf("Me informe sua altura?\n");
	scanf("%f", &imc -> altura);
	
	//printf("imc: %f\n",imc -> peso/pow (imc -> altura, 2));
	
	calc_imc(imc);
	
	resultado = calc_imc(imc);
	printf("%f\n", resultado);
}	

