#include <stdio.h>
#include <stdlib.h>

typedef struct{
	float peso, altura;
}tipoIMC;

int main(){
	tipoIMC*imc;
	imc = malloc(sizeof(tipoIMC));
	imc -> peso = 79.0;
	printf("%f\n", imc -> peso);
}	
