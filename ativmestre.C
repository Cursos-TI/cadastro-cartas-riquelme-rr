#include <stdio.h>

int main() {

    // =========================
    // CARTA 1
    // =========================
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    float densidade1;
    float pibPerCapita1;
    float superPoder1;

    // =========================
    // CARTA 2
    // =========================
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;
    float superPoder2;

    // =========================
    // ENTRADA - CARTA 1
    // =========================
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos1);

    // =========================
    // ENTRADA - CARTA 2
    // =========================
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // =========================
    // CÁLCULOS
    // =========================
    densidade1 = (float) populacao1 / area1;
    pibPerCapita1 = pib1 / (float) populacao1;

    densidade2 = (float) populacao2 / area2;
    pibPerCapita2 = pib2 / (float) populacao2;

    // Super Poder
    superPoder1 = 
        (float) populacao1 +
        area1 +
        pib1 +
        (float) pontosTuristicos1 +
        pibPerCapita1 +
        (1.0f / densidade1);

    superPoder2 = 
        (float) populacao2 +
        area2 +
        pib2 +
        (float) pontosTuristicos2 +
        pibPerCapita2 +
        (1.0f / densidade2);

    // =========================
    // COMPARAÇÕES
    // =========================
    int resultadoPopulacao = populacao1 > populacao2;
    int resultadoArea = area1 > area2;
    int resultadoPIB = pib1 > pib2;
    int resultadoPontos = pontosTuristicos1 > pontosTuristicos2;
    int resultadoDensidade = densidade1 < densidade2; // menor vence
    int resultadoPIBperCapita = pibPerCapita1 > pibPerCapita2;
    int resultadoSuperPoder = superPoder1 > superPoder2;

    // =========================
    // RESULTADO
    // =========================
    printf("\n=== Comparacao de Cartas ===\n");

    printf("Populacao: Carta %d venceu (%d)\n",
           resultadoPopulacao ? 1 : 2, resultadoPopulacao);

    printf("Area: Carta %d venceu (%d)\n",
           resultadoArea ? 1 : 2, resultadoArea);

    printf("PIB: Carta %d venceu (%d)\n",
           resultadoPIB ? 1 : 2, resultadoPIB);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n",
           resultadoPontos ? 1 : 2, resultadoPontos);

    printf("Densidade Populacional: Carta %d venceu (%d)\n",
           resultadoDensidade ? 1 : 2, resultadoDensidade);

    printf("PIB per Capita: Carta %d venceu (%d)\n",
           resultadoPIBperCapita ? 1 : 2, resultadoPIBperCapita);

    printf("Super Poder: Carta %d venceu (%d)\n",
           resultadoSuperPoder ? 1 : 2, resultadoSuperPoder);

    return 0;
}