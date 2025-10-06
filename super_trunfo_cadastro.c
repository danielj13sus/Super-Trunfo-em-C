#include <stdio.h>

int main() {

    char estado1;
    char codigo_carta1[4];
    char nome_cidade1[100];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    float super_poder1;

    char estado2;
    char codigo_carta2[4];
    char nome_cidade2[100];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    float super_poder2;

    int vitoria_pop, vitoria_area, vitoria_pib, vitoria_pts, vitoria_dens, vitoria_pib_pc, vitoria_sp;

    printf("--- Cadastro da Carta 1 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Digite o código da carta (ex: A01): ");
    scanf("%3s", codigo_carta1);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade1);
    printf("Digite a população: ");
    scanf("%lu", &populacao1);
    printf("Digite a área (em km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib1);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Digite o estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Digite o código da carta (ex: B02): ");
    scanf("%3s", codigo_carta2);
    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", nome_cidade2);
    printf("Digite a população: ");
    scanf("%lu", &populacao2);
    printf("Digite a área (em km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &pib2);
    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontos_turisticos2);

    densidade_populacional1 = (float)populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000.0f) / (float)populacao1;
    super_poder1 = (float)populacao1 +
                   area1 +
                   (pib1 * 1000000000.0f) + 
                   (float)pontos_turisticos1 +
                   pib_per_capita1 +
                   (1.0f / densidade_populacional1);

    densidade_populacional2 = (float)populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
    super_poder2 = (float)populacao2 +
                   area2 +
                   (pib2 * 1000000000.0f) +
                   (float)pontos_turisticos2 +
                   pib_per_capita2 +
                   (1.0f / densidade_populacional2);

    vitoria_pop    = populacao1 > populacao2;
    vitoria_area   = area1 > area2;
    vitoria_pib    = pib1 > pib2;
    vitoria_pts    = pontos_turisticos1 > pontos_turisticos2;
    vitoria_dens   = densidade_populacional1 < densidade_populacional2; 
    vitoria_pib_pc = pib_per_capita1 > pib_per_capita2;
    vitoria_sp     = super_poder1 > super_poder2;

    printf("\n\n--- Comparação de Cartas ---\n");
    
    printf("População: %s venceu (%d)\n",            vitoria_pop    ? "Carta 1" : "Carta 2", vitoria_pop);
    printf("Área: %s venceu (%d)\n",                 vitoria_area   ? "Carta 1" : "Carta 2", vitoria_area);
    printf("PIB: %s venceu (%d)\n",                  vitoria_pib    ? "Carta 1" : "Carta 2", vitoria_pib);
    printf("Pontos Turísticos: %s venceu (%d)\n",    vitoria_pts    ? "Carta 1" : "Carta 2", vitoria_pts);
    printf("Densidade Populacional: %s venceu (%d)\n", vitoria_dens   ? "Carta 1" : "Carta 2", vitoria_dens);
    printf("PIB per Capita: %s venceu (%d)\n",       vitoria_pib_pc ? "Carta 1" : "Carta 2", vitoria_pib_pc);
    printf("Super Poder: %s venceu (%d)\n",          vitoria_sp     ? "Carta 1" : "Carta 2", vitoria_sp);

    return 0;
}