#include <stdio.h>

int main() {
    // variáveis para cadastro das Cartas 1 e 2
    char estado1[3], estado2[3];
    char codigo1[20], codigo2[20];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosturisticos1, pontosturisticos2;

    // cadastro da Carta 1
    printf("Digite o nome do estado da Carta 1 (ex: SP):\n");
    scanf("%s", estado1);

    printf("Digite o código da Carta 1:\n");
    scanf("%s", codigo1);

    printf("Digite o nome da Cidade da Carta 1:\n");
    scanf(" %s[^\n]", cidade1); // permite espaço

    printf("Digite a população da Cidade da Carta 1:\n");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade da Carta 1 em km²:\n");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade da Carta 1:\n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de Pontos Turísticos da Cidade da Carta 1:\n");
    scanf("%d", &pontosturisticos1);

    // cadastro da Carta 2
    printf("Digite o nome do estado da Carta 2 (ex: RJ):\n");
    scanf("%s", estado2);

    printf("Digite o código da Carta 2:\n");
    scanf("%s", codigo2);

    printf("Digite o nome da Cidade da Carta 2:\n");
    scanf(" %s[^\n]", cidade2);

    printf("Digite a população da Cidade da Carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade da Carta 2 em km²:\n");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade da Carta 2:\n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de Pontos Turísticos da Cidade da Carta 2:\n");
    scanf("%d", &pontosturisticos2);

    // imprimir dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);

    // imprimir dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);

    return 0;
}
