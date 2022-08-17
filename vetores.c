#include <stdio.h>

int main(void){

    int fatorial (int x);
    int numero, resultado;

    printf("Digite um numero inteiro:\n");
    scanf("%d", &numero);

    resultado = fatorial(numero);

    printf("O fatorial e %d\n", resultado);

    system("pause");
    return 0
}
int fatorial(int x){

    int ressultado;
    if(x == 0){
        resultado = 1;
    }else{
        resultado = x * fatorial(x - 1);
    }
    return resultado;
}
