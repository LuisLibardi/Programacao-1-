#include <stdio.h>

int main()
{

int numero, valor;

valor = 0;

do {
	printf("Escreva um numero e digite zero para encerrar: \n");
 	scanf("%d", &numero);
 	
 	if (numero >= 100 && numero <= 200){
 	valor++;
 	}
 }while(numero != 0);


printf("OS numeros entre 100 e 200 foram:%d\n", valor);

}
