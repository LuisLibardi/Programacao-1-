#include <stdio.h>

int main(){

int idade;

printf("Me informe a idade: ");

scanf("%d", &idade);

if (idade <= 4)
printf("Idade nao correspondente");

// catergorias.
// Infantil A e B, Juvenil A e B, Senior > 18.

else {

if (idade <= 7)
printf("Infantil A");

else if (idade <= 10)
printf("Infantil B");

else if (idade <= 13)
printf("Juvenil A");

else if (idade <= 17)
printf("Juvenil B");

else
printf("Senior");

}
	}
