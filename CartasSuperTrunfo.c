#include <stdio.h>
#include <ctype.h>

int main() {

    // === Carta 1 ===
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
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
    scanf(" %49[^\n]", cidade1);   // aceita espaços no nome

    printf("Digite o número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos1);

    float densidade1 = populacao1 / area1;
    float pibCapita1 = pib1 / populacao1;
    
    // === Carta 2 ===
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
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
    scanf("%d", &populacao2);

    printf("Digite a área (em km²) da cidade: ");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da cidade: ");
    scanf("%d", &pontos2);

    float densidade2 = populacao2 / area2;
    float pibCapita2 = pib2 / populacao2;

    // === Exibição final organizada ===
    printf("\n=======================================\n");
    printf("          SUPER TRUNFO - CARTAS\n");
    printf("=======================================\n\n");

    printf("Carta 1:\n");
    printf("Estado:              %c\n", estado1);
    printf("Código:              %s\n", codigo1);
    printf("Nome da Cidade:      %s\n", cidade1);
    printf("População:           %d\n", populacao1);
    printf("Área:                %.2f km²\n", area1);
    printf("PIB:                 R$ %f\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB Per Capita:      R$ %f\n", pibCapita1);
    printf("---------------------------------------\n\n");

    printf("Carta 2:\n");
    printf("Estado:              %c\n", estado2);
    printf("Código:              %s\n", codigo2);
    printf("Nome da Cidade:      %s\n", cidade2);
    printf("População:           %d\n", populacao2);
    printf("Área:                %.2f km²\n", area2);
    printf("PIB:                 R$ %f\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB Per Capita:      R$ %f\n", pibCapita2);

    printf("\nPrograma finalizado.\n");
    return 0;
}