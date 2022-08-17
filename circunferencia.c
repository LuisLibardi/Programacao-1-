#include <stdio.h>
#include <math.h> 

#define  PI  3.14159

int main()
{
        int Raio;
        float  Perim, Area;

        printf("Entre com o valor do raio: ");
        scanf("%d", &Raio);


        Perim = 2 * PI * Raio;

        Area  = PI * pow(Raio, 2);

        printf("O perimetro da circunferencia de raio %d eh %.2f  \n", Raio, Perim);
        printf("e a area eh %.2f", Area);
}#include <stdio.h>
#include <math.h> 
#define  PI  3.14159

int main()
{
        int Raio;
        float  Perim, Area;

        printf("Entre com o valor do raio: ");
        scanf("%d", &Raio);

        Perim = 2 * PI * Raio;

        Area  = PI * pow(Raio, 2);

        printf("O perimetro da circunferencia de raio %d eh %.2f  \n", Raio, Perim);
        printf("e a area eh %.2f", Area);
}
