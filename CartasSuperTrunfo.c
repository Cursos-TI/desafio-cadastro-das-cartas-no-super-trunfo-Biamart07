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
    float densidade1, densidade2;
    float percapita1, percapita2;
    float superPoder1 = populacao1 + area1 + pib1 + pontosturisticos1 + densidade1 + 1/percapita1;
    float superPoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidade2 + 1/percapita2;
    int resultadoPopulacao;
    int resultadoArea;
    int resultadoPib;
    int resultadoPontosTuristicos;
    int resultadoDensidade;
    int resultatoPercapita;
    int resultadoSuperpoder;

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

    densidade1 = (float) populacao1 / area1;
    percapita1 = (float) pib1 / populacao1;


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

    densidade2 = (float) populacao2 / area2;
    percapita2 = (float) pib2 / populacao2;

    // imprimir dados da Carta 1
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per capita: %.2f reais\n", percapita1);

    // imprimir dados da Carta 2
    printf("\n=== Carta 2 ===\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: %.2f reais\n", percapita2);

    //comparação de atributos das cartas
    resultadoPopulacao = populacao1 > populacao2;
    resultadoArea = area1 > area2;
    resultadoPib = pib1 > pib2;
    resultadoPontosTuristicos = pontosturisticos1 > pontosturisticos2;
    resultadoDensidade = densidade1 > densidade2;
    resultatoPercapita = percapita1 < percapita2;
    resultadoSuperpoder = superPoder1 > superPoder2;

    //imprimir resultado da comparação
    printf("Comparação de cartas\n");
    printf("População %d\n", resultadoPopulacao);
    printf("Area %d\n", resultadoArea);
    printf("Pib %d\n", resultadoPib);
    printf("Pontos Turísticos %d\n", resultadoPontosTuristicos);
    printf("Densidade %d\n", resultadoDensidade);
    printf("Per Capita %d\n", resultatoPercapita);
    printf("Super Poder %d\n", resultadoSuperpoder);

    return 0;
}

//outra forma de imprirmir os dados
/*printf(
    "\n=== Carta 1 ===\n"
    "Estado: %s\n"
    "Código: %s\n"
    "Cidade: %s\n"
    "População: %d\n"
    "Área: %.2f km²\n"
    "PIB: %.2f\n"
    "Pontos Turísticos: %d\n\n"

    "=== Carta 2 ===\n"
    "Estado: %s\n"
    "Código: %s\n"
    "Cidade: %s\n"
    "População: %d\n"
    "Área: %.2f km²\n"
    "PIB: %.2f\n"
    "Pontos Turísticos: %d\n",

    estado1, codigo1, cidade1, populacao1, area1, pib1, pontosturisticos1,
    estado2, codigo2, cidade2, populacao2, area2, pib2, pontosturisticos2
);*/