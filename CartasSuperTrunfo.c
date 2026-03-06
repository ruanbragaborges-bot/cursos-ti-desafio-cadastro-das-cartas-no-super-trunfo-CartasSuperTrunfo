#include <stdio.h>

    int main(){

 char estado[1];
    char codigo [4];
    char cidade [20];
    int populacao;
    int numero;
    float area, PIB, densidade, capita;

    printf("digite o estado: \n");
    scanf("%s", &estado);

    printf("digite o codigo da cidade: \n");
    scanf("%s",&codigo);

    printf("digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("digite a populacao: \n");
    scanf("%d", &populacao);

    printf("digite a area: \n");
    scanf("%f",&area);

    printf("digite o PIB: \n");
    scanf("%f", &PIB);

    printf("digite o numero de pontos turisticos: \n");
    scanf("%d", &numero);

    densidade = populacao / area;
    capita = populacao / PIB;


    printf("estado: %s - codigo da cidade: %s - nome da cidade: %s \n", estado, codigo, cidade);
    printf("populacao: %d \n", populacao);
    printf("area: %f - PIB: %f \n", area, PIB);
    printf("numero de pontos turisticos: %d \n", numero);
    printf("Densidade e: %f \n ", densidade),
    printf("Capital e: %f", capita);














    return 0;
}
