#include <stdio.h>

int Td(int d,int m,int a){
    int mes[13],i,soma=0;
    mes[0]=0;
    mes[1]=mes[3]=mes[5]=mes[7]=mes[8]=mes[10]=mes[12]=31;
    if ((a%4)==0) mes[2]=29;
    else mes[2]=28;
    mes[4]=mes[6]=mes[9]=mes[11]=30;
    for(i=1;i<m;i++)soma+=mes[i];
    soma+=d;
    return (soma);
}

int main() {
    int dia,mes,ano,total;
    printf("\nDig dia: ");
    scanf("%d",&dia);
    printf("\nDig mes: (de 1 a 12) ");
    scanf("%d",&mes);
    printf("\nDig ano: ");
    scanf("%d",&ano);
    total=Td(dia,mes,ano);
    printf("\n\nTotal=%d\n",total);
    getch();
    return 0;
}
