#include <stdio.h>
 
int main() {

    float valor1, valor2, valor3;
    float saldo, retirada;
    
    printf("me informe a entrada:\n");
    scanf("%f", &valor1);

    printf("Agoa me informe o valor da retirada:\n");
    scanf("%f", &valor2);

    saldo = (valor1 + valor2) - valor2;

    if(saldo > 2000){
    printf("Valor total de dinheiro recebido:%f\n", valor1);
    printf("Valor total de pagamentos realizados:%f\n", valor2);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
    
}

    else if(saldo < 500){
    printf("Valor total de dinheiro recebido:%f\n", valor1);
    printf("Valor total de pagamentos realizados:%f\n", valor2);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
}
    else{
}
    return 0;
}
