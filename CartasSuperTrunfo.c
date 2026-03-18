#include <stdio.h>
#include <ctype.h>

int main() {

    // === Carta 1 ===
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontos1;
    int numero1;

    printf("=== Carta 1 ===\n");

    printf("Digite a letra do estado (de A a H): ");
    scanf(" %c", &estado1);
    estado1 = toupper(estado1);

    while (estado1 < 'A' || estado1 > 'H') {
        printf("Letra inválida! Digite uma letra entre A a H.\n");
        scanf(" %c", &estado1);
        estado1 = toupper(estado1);
    }

    printf("Digite o número da carta (de 1 a 4): ");
    scanf("%d", &numero1);

    while (numero1 < 1 || numero1 > 4) {
        printf("Número inválido! Digite entre 1 e 4: ");
        scanf("%d", &numero1);
    }

    sprintf(codigo1, "%c%02d", estado1, numero1);

    printf("Digite o nome da cidade da carta: ");
    scanf(" %49[^\n]", cidade1);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos1);

    // Cálculos Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibCapita1 = pib1 * 1e9f / (float)populacao1;   // pib em bilhões → reais
    float inversoDens1 = 1.0f / densidade1;
    float superPoder1 = (float)populacao1 + area1 + (pib1 * 1e9f) + (float)pontos1 + pibCapita1 + inversoDens1;

    // === Carta 2 ===
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontos2;
    int numero2;

    printf("\n=== Carta 2 ===\n");

    printf("Digite a letra do estado (de A a H): ");
    scanf(" %c", &estado2);
    estado2 = toupper(estado2);

    while (estado2 < 'A' || estado2 > 'H') {
        printf("Letra inválida! Digite uma letra entre A a H.\n");
        scanf(" %c", &estado2);
        estado2 = toupper(estado2);
    }

    printf("Digite o número da carta (de 1 a 4): ");
    scanf("%d", &numero2);

    while (numero2 < 1 || numero2 > 4) {
        printf("Número inválido! Digite entre 1 e 4: ");
        scanf("%d", &numero2);
    }

    sprintf(codigo2, "%c%02d", estado2, numero2);

    printf("Digite o nome da cidade da carta: ");
    scanf(" %49[^\n]", cidade2);

    printf("Digite o número de habitantes da cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos2);

    // Cálculos Carta 2
    float densidade2     = (float)populacao2 / area2;
    float pibCapita2     = pib2 * 1e9f / (float)populacao2;   // pib em bilhões → reais
    float inversoDens2   = 1.0f / densidade2;
    float superPoder2    = (float)populacao2 + area2 + (pib2 * 1e9f) + (float)pontos2 + pibCapita2 + inversoDens2;


    // RESULTADOS:

    printf("\n=======================================\n");
    printf("        SUPER TRUNFO - COMPARAÇÃO\n");
    printf("=======================================\n\n");

    printf("Comparação de Cartas:\n");

    // População (maior vence)
    printf("População: Carta %d venceu (%d)\n",
           populacao1 > populacao2 ? 1 : 2,
           populacao1 > populacao2 ? 1 : 0);

    // Área (maior vence)
    printf("Área:                    Carta %d venceu (%d)\n",
           area1 > area2 ? 1 : 2,
           area1 > area2 ? 1 : 0);

    // PIB total (maior vence) – usando valor em reais
    printf("PIB:                     Carta %d venceu (%d)\n",
           (pib1 * 1e9f) > (pib2 * 1e9f) ? 1 : 2,
           (pib1 * 1e9f) > (pib2 * 1e9f) ? 1 : 0);

    // Pontos Turísticos (maior vence)
    printf("Pontos Turísticos:       Carta %d venceu (%d)\n",
           pontos1 > pontos2 ? 1 : 2,
           pontos1 > pontos2 ? 1 : 0);

    // Densidade Populacional (MENOR vence)
    printf("Densidade Populacional:  Carta %d venceu (%d)\n",
           densidade1 < densidade2 ? 1 : 2,
           densidade1 < densidade2 ? 1 : 0);

    // PIB per Capita (maior vence)
    printf("PIB per Capita:          Carta %d venceu (%d)\n",
           pibCapita1 > pibCapita2 ? 1 : 2,
           pibCapita1 > pibCapita2 ? 1 : 0);

    // Super Poder (maior vence)
    printf("Super Poder:             Carta %d venceu (%d)\n",
           superPoder1 > superPoder2 ? 1 : 2,
           superPoder1 > superPoder2 ? 1 : 0);

    printf("\nPrograma finalizado.\n");
    return 0;
}