#include <stdio.h>

int int main(int argc, char const *argv[])
{
  float notas[3];
  int i;

  for (i=0; i<3; i++);
    {
        printf("Digite a nota número %d:\n", i);
        scanf("%f", &notas[i]);
    }

    printf("Valores lidos:");
    for(i=0; i<3; i++)
        printf("Nota[%d]=%.2f", i, notas[i]);
}
