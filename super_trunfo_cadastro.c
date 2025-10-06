#include <stdio.h>
#include <string.h>

#define ATRIBUTO_A_COMPARAR "POPULACAO"

int main() {

    char estado1[4];
    char codigo_carta1[4];
    char nome_cidade1[100];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;

    char estado2[4];
    char codigo_carta2[4];
    char nome_cidade2[100];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (ex: SP): ");
    scanf("%3s", estado1);
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

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (ex: RJ): ");
    scanf("%3s", estado2);
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

    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;

    printf("\n\n");
    
    if (strcmp(ATRIBUTO_A_COMPARAR, "POPULACAO") == 0) {
        printf("Comparação de cartas (Atributo: População):\n\n");
        printf("Carta 1 - %s (%s): %d\n", nome_cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", nome_cidade2, estado2, populacao2);
        
        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (populacao2 > populacao1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    } 
    else if (strcmp(ATRIBUTO_A_COMPARAR, "AREA") == 0) {
        printf("Comparação de cartas (Atributo: Área):\n\n");
        printf("Carta 1 - %s (%s): %.2f km²\n", nome_cidade1, estado1, area1);
        printf("Carta 2 - %s (%s): %.2f km²\n", nome_cidade2, estado2, area2);
        
        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (area2 > area1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    else if (strcmp(ATRIBUTO_A_COMPARAR, "DENSIDADE") == 0) {
        printf("Comparação de cartas (Atributo: Densidade Populacional):\n\n");
        printf("Carta 1 - %s (%s): %.2f hab/km²\n", nome_cidade1, estado1, densidade_populacional1);
        printf("Carta 2 - %s (%s): %.2f hab/km²\n", nome_cidade2, estado2, densidade_populacional2);

        if (densidade_populacional1 < densidade_populacional2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome_cidade1);
        } else if (densidade_populacional2 < densidade_populacional1) {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome_cidade2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    
    else {
        printf("ERRO: Atributo de comparação '%s' é inválido!\n", ATRIBUTO_A_COMPARAR);
    }

    return 0;
}