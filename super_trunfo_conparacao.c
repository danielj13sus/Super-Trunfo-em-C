#include <stdio.h>

enum Atributo {
    POPULACAO = 1,
    AREA,
    PIB,
    PONTOS_TURISTICOS,
    DENSIDADE
};

int main() {

    char pais1[] = "Brasil";
    int populacao1 = 215300000;
    float area1 = 8516000.0f;
    float pib1 = 1.609f; 
    int pontos_turisticos1 = 150;

    char pais2[] = "Japão";
    int populacao2 = 125700000;
    float area2 = 377975.0f;
    float pib2 = 4.937f; 
    int pontos_turisticos2 = 120;

    float densidade1 = (float)populacao1 / area1;
    float densidade2 = (float)populacao2 / area2;

    int escolha;

    printf("--- Super Trunfo: Comparação de Países ---\n");
    printf("Dados das Cartas:\n");
    printf("1. %s\n", pais1);
    printf("2. %s\n\n", pais2);
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB (em trilhões de USD)\n");
    printf("4. Número de Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("Digite sua escolha (1-5): ");

    scanf("%d", &escolha);
    printf("\n");

    switch (escolha) {
        case POPULACAO:
            printf("--- Comparando por: População ---\n");
            printf("%s: %d habitantes\n", pais1, populacao1);
            printf("%s: %d habitantes\n", pais2, populacao2);
            printf("\n");

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case AREA:
            printf("--- Comparando por: Área ---\n");
            printf("%s: %.2f km²\n", pais1, area1);
            printf("%s: %.2f km²\n", pais2, area2);
            printf("\n");

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case PIB:
            printf("--- Comparando por: PIB ---\n");
            printf("%s: %.3f trilhões de USD\n", pais1, pib1);
            printf("%s: %.3f trilhões de USD\n", pais2, pib2);
            printf("\n");

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case PONTOS_TURISTICOS:
            printf("--- Comparando por: Pontos Turísticos ---\n");
            printf("%s: %d pontos\n", pais1, pontos_turisticos1);
            printf("%s: %d pontos\n", pais2, pontos_turisticos2);
            printf("\n");
            
            if(pontos_turisticos1 > pontos_turisticos2){
                printf("Resultado: %s venceu!\n", pais1);
            } else if (pontos_turisticos2 > pontos_turisticos1){
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case DENSIDADE:
            printf("--- Comparando por: Densidade Demográfica ---\n");
            printf("Regra especial: O menor valor vence!\n\n");
            printf("%s: %.2f hab/km²\n", pais1, densidade1);
            printf("%s: %.2f hab/km²\n", pais2, densidade2);
            printf("\n");

            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: %s venceu!\n", pais2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Erro: Opção '%d' é inválida. Por favor, execute novamente e escolha um número de 1 a 5.\n", escolha);
            break;
    }

    return 0;
}