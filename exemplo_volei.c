#include <stdio.h>
#include <stdlib.h>

#define NUM_PAISES 2
#define NUM_JOG 2

typedef struct {
    float peso;
    int idade;
} tipoJogador;

int main()
{
    tipoJogador info[NUM_PAISES][NUM_JOG]; 
    int idx_pais, idx_jog; 
    float peso_medio_time[NUM_PAISES], idade_media_time[NUM_PAISES], mais_pesado_time[NUM_PAISES],
          peso_medio_geral, idade_media_geral;
    int idx_mais_pesado_time[NUM_PAISES], mais_jovem_time[NUM_PAISES], idx_mais_jovem_time[NUM_PAISES];
    
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        printf("Coletando dados do país %d:\n", idx_pais);
        for (idx_jog=0;idx_jog<NUM_JOG;idx_jog++)
        {
            printf("  Coletando dados do jogador %d:\n", idx_jog);
            printf("  Idade: ");
            scanf("%d", &info[idx_pais][idx_jog].idade);
            scanf("%f", &info[idx_pais][idx_jog].peso);
            printf("\n");
        }
    }
    
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        peso_medio_time[idx_pais] = 0.0;
        idade_media_time[idx_pais] = 0.0;
    }
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        for (idx_jog=0;idx_jog<NUM_JOG;idx_jog++)
        {
            peso_medio_time[idx_pais] += info[idx_pais][idx_jog].peso;
            idade_media_time[idx_pais] += info[idx_pais][idx_jog].idade;
        }
        peso_medio_time[idx_pais] = peso_medio_time[idx_pais] / NUM_JOG;
        idade_media_time[idx_pais] = idade_media_time[idx_pais] / NUM_JOG;
    }
    printf("\n"); 
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        printf("Peso  médio do time %d: %.2f\n",  idx_pais, peso_medio_time[idx_pais]);
        printf("Idade média do time %d: %.2f\n", idx_pais, idade_media_time[idx_pais]);
    }
        
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        mais_pesado_time[idx_pais] = -1.0;
    }
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        for (idx_jog=0;idx_jog<NUM_JOG;idx_jog++)
        {
            if (info[idx_pais][idx_jog].peso > mais_pesado_time[idx_pais])
            {
                mais_pesado_time[idx_pais] = info[idx_pais][idx_jog].peso;
                idx_mais_pesado_time[idx_pais] = idx_jog;
            }
        }
    }
   
    printf("\n"); 
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        printf("Jogador mais pesado do país %d:\n", idx_pais);
        printf("  Número do jogador: %d\n", idx_mais_pesado_time[idx_pais]);
        printf("  Peso: %.2f\n", mais_pesado_time[idx_pais]);
    }
    
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        mais_jovem_time[idx_pais] = 999;
    }
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        idx_mais_jovem_time[idx_pais]
        for (idx_jog=0;idx_jog<NUM_JOG;idx_jog++)
        {
            
            if (info[idx_pais][idx_jog].idade < mais_jovem_time[idx_pais])
            {
                mais_jovem_time[idx_pais] = info[idx_pais][idx_jog].idade;
                idx_mais_jovem_time[idx_pais] = idx_jog;
            }
        }
    }
    
    printf("\n");
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        printf("Jogador mais jovem do país %d:\n", idx_pais);
        printf("  Número do jogador: %d\n", idx_mais_jovem_time[idx_pais]);
        printf("  Idade: %d\n", mais_jovem_time[idx_pais]);
    }
    
    
    peso_medio_geral = 0.0;
    idade_media_geral = 0.0;
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        for (idx_jog=0;idx_jog<NUM_JOG;idx_jog++)
        {
            peso_medio_geral += info[idx_pais][idx_jog].peso;
            idade_media_geral += info[idx_pais][idx_jog].idade;
        }
        peso_medio_geral = peso_medio_geral / NUM_JOG;
        idade_media_geral = idade_media_geral / NUM_JOG;
    }
    printf("\n");
    for (idx_pais=0;idx_pais<NUM_PAISES;idx_pais++)
    {
        printf("Peso  médio geral do time %d: %.2f\n",  idx_pais, peso_medio_geral);
        printf("Idade média geral do time %d: %.2f\n", idx_pais, idade_media_geral);
    }
}
