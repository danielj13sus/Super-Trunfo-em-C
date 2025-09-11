#include <stdio.h>

int main() {

    char  estadoCarta1;
    char  codigoCarta1[5]; 
    char  nomeCidade1[50];
    int   populacao1;
    float area1;
    float pib1;
    int   pontosTuristicos1;
    float densidadePopulacional1;
    float pibPerCapita1;

    char  estadoCarta2;
    char  codigoCarta2[5];
    char  nomeCidade2[50];
    int   populacao2;
    float area2;
    float pib2;
    int   pontosTuristicos2;
    float densidadePopulacional2;
    float pibPerCapita2;

    printf("--- CADASTRO DA CARTA 1 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta1);

    printf("Digite o codigo da carta (ex: A01): ");
    scanf("%s", codigoCarta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Digite a populacao: ");
    scanf("%d", &populacao1);

    printf("Digite a area (em km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);


    printf("\n--- CADASTRO DA CARTA 2 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estadoCarta2);

    printf("Digite o codigo da carta (ex: B02): ");
    scanf("%s", codigoCarta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Digite a populacao: ");
    scanf("%d", &populacao2);

    printf("Digite a area (em km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    densidadePopulacional1 = (float)populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    densidadePopulacional2 = (float)populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    printf("\n\n--- DADOS DAS CARTAS CADASTRADAS ---\n");

    printf("\nCarta 1:\n");
    printf("--------------------------------------\n");
    printf("Estado: %c\n", estadoCarta1);
    printf("Codigo: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1); 
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\nCarta 2:\n");
    printf("--------------------------------------\n");
    printf("Estado: %c\n", estadoCarta2);
    printf("Codigo: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0;
}