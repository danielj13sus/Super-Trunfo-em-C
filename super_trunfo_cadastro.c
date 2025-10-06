#include <stdio.h>

int main() {

    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[100]; 
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("--- Cadastro da Carta 1 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo_carta1);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    printf("\n");

    printf("--- Cadastro da Carta 2 ---\n");

    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", codigo_carta2);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    printf("\n\n");

    printf("--- Dados da Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo_carta1);
    printf("Nome da Cidade: %s\n", nome_cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);

    printf("\n");

    printf("--- Dados da Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo_carta2);
    printf("Nome da Cidade: %s\n", nome_cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);

    return 0;
}