#include <stdio.h>

int main() {
    char codigo_da_cidade [50] ;
    char nome [50];
    int pontos_turisticos;
    int  população;
    float pib;
    float area;
    

    printf("Digite o codigo da cidade: \n");
    scanf("%s", &codigo_da_cidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &nome);

    printf("Digite a população: \n");
    scanf("%d", &população);

    printf("Digite a area da cidade \n");
    scanf("%f", &area);

    printf("Digite o Pib da cidade \n");
    scanf("%f", &pib);

    printf("Digite o numero de pontos turísticos da cidade \n");
    scanf("%d", &pontos_turisticos);

    printf("código da cidade: %s \n");
    printf("nome da cidade: %s \n");
    printf("número populacional: %d \n");
    printf("área em km²: %f \n");
    printf("Pib em reais R$: %f \n");
    printf("número de pontos turísticos: %d \n");


    return 0; 
}