#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void binario(int num);

int main(){
	int num;
	binario(27);
	printf("\n");
}

void binario(int num){

	if(num / 2 == 0){
	printf("binario");
	}else{
	binario(num/2);
	printf("%d", num%2);
	}
}
