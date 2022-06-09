#include <stdio.h>
 
int main(){

    float saldo, soma, retirada, total;
    
    printf("Me informe o valor que entrou na segunda-feira:\n");
    scanf("%f", &total);
    
    saldo = saldo + total;

    printf("Qual foi o valor pago neste dia:");
    scanf("%f", &retirada);

    saldo = retirada + total;
    soma = saldo - total;
    total = retirada + saldo;

    printf("Valor do caixa na segunda feira; %f\n", total);

    if(saldo > 2000){
    printf("Valor total de dinheiro recebido:%f\n",  saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);   
}
    else if(saldo < 500){
    printf("Valor total de dinheiro recebido:%f\n", saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
}
    
//*

    printf("Me informe o valor que entrou na terca-feira:\n");
    scanf("%f", &total);
    
    saldo = saldo + total;

    printf("Qual foi o valor pago neste dia:");
    scanf("%f", &total);

     saldo = soma + total;

    printf("Agoa me informe o valor que foi retirado:\n");
    scanf("%f", &total);
    
    soma = saldo - total;

    printf("Valor do caixa na terca-feira; %f\n", soma);

    if(saldo > 2000){
    printf("Valor total de dinheiro recebido:%f\n",  saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);   
}
    else if(saldo < 500){
    printf("Valor total de dinheiro recebido:%f\n", saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
}

//*
    
    printf("Me informe o valor que entrou na quarta-feira:\n");
    scanf("%f", &total);
    
    saldo = saldo + total;

    printf("Qual foi o valor pago neste dia:");
    scanf("%f", &total);

     saldo = soma + total;

    printf("Agoa me informe o valor que foi retirado:\n");
    scanf("%f", &total);
    
    soma = saldo - total;

    printf("Valor do caixa na quarta-feira; %f\n", soma);

    if(saldo > 2000){
    printf("Valor total de dinheiro recebido:%f\n",  saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);   
}
    else if(saldo < 500){
    printf("Valor total de dinheiro recebido:%f\n", saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
}

//*

 printf("Me informe o valor que entrou na quinta-feira:\n");
    scanf("%f", &total);
    
    saldo = saldo + total;

    printf("Qual foi o valor pago neste dia:");
    scanf("%f", &total);

     saldo = soma + total;

    printf("Agoa me informe o valor que foi retirado:\n");
    scanf("%f", &total);
    
    soma = saldo - total;

    printf("Valor do caixa na quinta-feira; %f\n", soma);

    if(saldo > 2000){
    printf("Valor total de dinheiro recebido:%f\n",  saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);   
}
    else if(saldo < 500){
    printf("Valor total de dinheiro recebido:%f\n", saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
}

//*

 printf("Me informe o valor que entrou na sexta-feira:\n");
    scanf("%f", &total);
    
    saldo = saldo + total;

    printf("Qual foi o valor pago neste dia:");
    scanf("%f", &total);

     saldo = soma + total;

    printf("Agoa me informe o valor que foi retirado:\n");
    scanf("%f", &total);
    
    soma = saldo - total;

    printf("Valor do caixa na sexta-feira; %f\n", soma);

    if(saldo > 2000){
    printf("Valor total de dinheiro recebido:%f\n",  saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);   
}
    else if(saldo < 500){
    printf("Valor total de dinheiro recebido:%f\n", saldo);
    printf("Valor total de pagamentos realizados:%f\n", soma);
    printf("Qual é o saldo positivo atual:%f\n", saldo);
}

printf("Fim");

    return 0;
}
