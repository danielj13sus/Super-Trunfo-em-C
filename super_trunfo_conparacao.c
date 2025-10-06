#include <stdio.h>
#include <string.h>

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

    int escolha1, escolha2;
    char nome_attr1[30], nome_attr2[30];
    float valor_attr1_carta1, valor_attr1_carta2;
    float valor_attr2_carta1, valor_attr2_carta2;

    printf("--- Super Trunfo: Escolha o PRIMEIRO atributo ---\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha1);

    if (escolha1 < 1 || escolha1 > 5) {
        printf("Erro: Escolha inválida. O programa será encerrado.\n");
        return 0;
    }

    printf("\n--- Escolha o SEGUNDO atributo (diferente do primeiro) ---\n");
    if (escolha1 != POPULACAO)         printf("1. População\n");
    if (escolha1 != AREA)              printf("2. Área\n");
    if (escolha1 != PIB)               printf("3. PIB\n");
    if (escolha1 != PONTOS_TURISTICOS) printf("4. Pontos Turísticos\n");
    if (escolha1 != DENSIDADE)         printf("5. Densidade\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha2);

    if (escolha2 < 1 || escolha2 > 5 || escolha2 == escolha1) {
        printf("Erro: Escolha inválida ou igual à primeira. O programa será encerrado.\n");
        return 0;
    }

    switch (escolha1) {
        case POPULACAO:
            strcpy(nome_attr1, "População");
            valor_attr1_carta1 = (float)populacao1;
            valor_attr1_carta2 = (float)populacao2;
            break;
        case AREA:
            strcpy(nome_attr1, "Área");
            valor_attr1_carta1 = area1;
            valor_attr1_carta2 = area2;
            break;
        case PIB:
            strcpy(nome_attr1, "PIB");
            valor_attr1_carta1 = pib1;
            valor_attr1_carta2 = pib2;
            break;
        case PONTOS_TURISTICOS:
            strcpy(nome_attr1, "Pontos Turísticos");
            valor_attr1_carta1 = (float)pontos_turisticos1;
            valor_attr1_carta2 = (float)pontos_turisticos2;
            break;
        case DENSIDADE:
            strcpy(nome_attr1, "Densidade");
            valor_attr1_carta1 = densidade1;
            valor_attr1_carta2 = densidade2;
            break;
    }

    switch (escolha2) {
        case POPULACAO:
            strcpy(nome_attr2, "População");
            valor_attr2_carta1 = (float)populacao1;
            valor_attr2_carta2 = (float)populacao2;
            break;
        case AREA:
            strcpy(nome_attr2, "Área");
            valor_attr2_carta1 = area1;
            valor_attr2_carta2 = area2;
            break;
        case PIB:
            strcpy(nome_attr2, "PIB");
            valor_attr2_carta1 = pib1;
            valor_attr2_carta2 = pib2;
            break;
        case PONTOS_TURISTICOS:
            strcpy(nome_attr2, "Pontos Turísticos");
            valor_attr2_carta1 = (float)pontos_turisticos1;
            valor_attr2_carta2 = (float)pontos_turisticos2;
            break;
        case DENSIDADE:
            strcpy(nome_attr2, "Densidade");
            valor_attr2_carta1 = densidade1;
            valor_attr2_carta2 = densidade2;
            break;
    }

    float soma_carta1 = valor_attr1_carta1 + valor_attr2_carta1;
    float soma_carta2 = valor_attr1_carta2 + valor_attr2_carta2;

    printf("\n\n--- Resultado da Rodada ---\n\n");
    printf("Países: %s vs. %s\n", pais1, pais2);
    printf("Atributos Escolhidos: %s e %s\n", nome_attr1, nome_attr2);
    printf("----------------------------------------\n");
    printf("                           %s      | %s\n", pais1, pais2);
    printf("%-25s: %-10.2f | %-10.2f\n", nome_attr1, valor_attr1_carta1, valor_attr1_carta2);
    printf("%-25s: %-10.2f | %-10.2f\n", nome_attr2, valor_attr2_carta1, valor_attr2_carta2);
    printf("----------------------------------------\n");
    printf("%-25s: %-10.2f | %-10.2f\n", "SOMA TOTAL", soma_carta1, soma_carta2);
    printf("----------------------------------------\n\n");

    char* resultado = (soma_carta1 > soma_carta2) ? pais1 :
                      (soma_carta2 > soma_carta1) ? pais2 :
                                                    "Empate!";

    if (strcmp(resultado, "Empate!") != 0) {
        printf("Resultado Final: %s venceu!\n", resultado);
    } else {
        printf("Resultado Final: Empate!\n");
    }

    return 0;
}