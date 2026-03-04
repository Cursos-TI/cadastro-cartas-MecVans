#include <stdio.h> 
#include <ctype.h>

int main() {

char estado, cidade[30], codigo[4];
int populacao, pontos, numero;
float pib, area;

printf("Digite a letra do estado (de A a H): ");
scanf(" %c", &estado);
estado = toupper(estado);

    while (estado < 'A' || estado > 'H') {
        printf("Letra inválida! Digite uma letra entre A a H.\n");
        scanf(" %c", &estado);
        estado = toupper(estado);
    }

printf("Digite o número da carta (de 1 a 4): ");
scanf("%d", &numero);
    while (numero < 1 || numero > 4) {
        printf("Número inválido! Digite entre 1 e 4: ");
        scanf("%d", &numero);
    }
// Monta o código da carta: Pega a letra do estado.
// O código força 2 caracteres, sendo preenchido com o 0 (antes do valor, se menor que 2 caracteres).
    sprintf(codigo, "%c%02d", estado, numero);

    // Mostra o resultado
    // printf("\nCódigo gerado: %s\n", codigo);

printf("Digite o nome da cidade da carta: ");
scanf(" %s", cidade);

printf("Digite o número de habitantes da cidade: ");
scanf(" %d", &populacao);

printf("Digite a área (em km²) da cidade: ");
scanf(" %f", &area);

printf("Digite o PIB da cidade: ");
scanf(" %f", &pib);

printf("Digite a quantidade de pontos turisticos da cidade: ");
scanf(" %d", &pontos);

printf("\nCarta 1:\nEstado: %c", estado);
printf("\nCódigo: %s", codigo);
printf("\nNome da cidade: %s", cidade);
printf("\nPopulação: %d", populacao);
printf("\nÁrea: %f", area);
printf("\nPIB: %f", pib);
printf("\nNúmero de Pontos Turísticos: %d", pontos);
return 0;
}