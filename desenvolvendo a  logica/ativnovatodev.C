#include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTA 1 =====
    char estado1[30] = "SP";
    char codigo1[10] = "C1";
    char cidade1[50] = "Sao Paulo";
    int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28; // em bilhões
    int pontosTuristicos1 = 50;

    // ===== CARTA 2 =====
    char estado2[30] = "RJ";
    char codigo2[10] = "C2";
    char cidade2[50] = "Rio de Janeiro";
    int populacao2 = 6000000;
    float area2 = 1200.25;
    float pib2 = 300.50; // em bilhões
    int pontosTuristicos2 = 30;

    // ===== CÁLCULOS =====
    float densidade1 = populacao1 / area1;
    float pibPerCapita1 = pib1 / populacao1;

    float densidade2 = populacao2 / area2;
    float pibPerCapita2 = pib2 / populacao2;

    // ===== MOSTRANDO DADOS CALCULADOS =====
    printf("=== DADOS CALCULADOS ===\n\n");

    printf("Carta 1 - %s:\n", cidade1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.6f\n\n", pibPerCapita1);

    printf("Carta 2 - %s:\n", cidade2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.6f\n\n", pibPerCapita2);

    // ===== COMPARAÇÃO (ATRIBUTO ESCOLHIDO: POPULAÇÃO) =====
    printf("=== COMPARAÇÃO DE CARTAS (Atributo: População) ===\n\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d habitantes\n\n", cidade2, estado2, populacao2);

    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    }
    else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}