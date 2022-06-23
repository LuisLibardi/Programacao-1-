#include <stdio.h>

int main(){

int i, fibo, fibo2, nacci;

fibo = 1;
fibo2 = 1;

printf("%d\n", fibo);
printf("%d\n", fibo2);

for (i = 2; i < 20; i++) {
 
nacci = fibo2;
 
fibo2 = fibo + fibo2;
 
printf("%d\n", fibo2);
 
fibo = nacci;
}
	}
