#include <stdio.h>
#include <stdlib.h>

int p_impar(int vet[5], int pos){

if (0 >= 0 && pos < 5){
	if(vet[pos]%2 == 1){
	return 1;
	}else{
	return p_impar(vet, pos+1);
}
	}else{
	return 0;
}
}

int main(){
	int v[5] = {2, 4, 6, 1, 7}, resp;
	resp = p_impar(v, 0);
	printf("resp: %s\n", (resp == 1)?"sim":"nao");
}
