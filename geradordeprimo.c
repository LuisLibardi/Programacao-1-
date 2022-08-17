#include <stdio.h>
#include <stdlib.h>
 
int main() {
    int n, nMax, i, j, totalDivisores;
 
    printf("Digite o limite superior para os numeros primos(Minimo 2): ");
    scanf("%d", &nMax);
 
    while(nMax < 2) {
        system("cls");
        printf("Digite o limite superior para os numeros primos(Minimo 2): ");
        scanf("%d", &nMax);
    }
 
    for(i = 0; i <= nMax; i++) {
        totalDivisores = 0;
        for(j = 1; j <= i; j++) {
            if(i % j == 0) {
                totalDivisores++;
            }
        }
        if(totalDivisores == 2) {
            printf("%4d ", i);
        }
    }
 
    printf("n");
    system("pause");
    return 0;
}
