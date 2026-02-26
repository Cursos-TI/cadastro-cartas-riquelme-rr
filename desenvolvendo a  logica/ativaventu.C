#include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTA 1 =====
    char pais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0; // em bilhões
    int pontosTuristicos1 = 25;

    // ===== CARTA 2 =====
    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 632.0; // em bilhões
    int pontosTuristicos2 = 18;

    // ===== CÁLCULO DA DENSIDADE DEMOGRÁFICA =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // ===== MENU INTERATIVO =====
    printf("=== SUPER TRUNFO - COMPARAÇÃO DE PAÍSES ===\n\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Número de pontos turísticos\n");
    printf("5 - Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\n");

    // ===== SWITCH PARA ESCOLHA DO ATRIBUTO =====
    switch(opcao) {

        case 1: // POPULAÇÃO
            printf("Comparação por População:\n");
            printf("%s: %d\n", pais1, populacao1);
            printf("%s: %d\n", pais2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", pais1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // ÁREA
            printf("Comparação por Área:\n");
            printf("%s: %.2f\n", pais1, area1);
            printf("%s: %.2f\n", pais2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", pais1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Comparação por PIB:\n");
            printf("%s: %.2f\n", pais1, pib1);
            printf("%s: %.2f\n", pais2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pib2 > pib1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // PONTOS TURÍSTICOS
            printf("Comparação por Pontos Turísticos:\n");
            printf("%s: %d\n", pais1, pontosTuristicos1);
            printf("%s: %d\n", pais2, pontosTuristicos2);

            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", pais1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // DENSIDADE (REGRA INVERTIDA)
            printf("Comparação por Densidade Demográfica:\n");
            printf("%s: %.2f\n", pais1, densidade1);
            printf("%s: %.2f\n", pais2, densidade2);

            // REGRA ESPECIAL: MENOR VALOR VENCE
            if (densidade1 < densidade2) {
                printf("Vencedor: %s\n", pais1);
            } else if (densidade2 < densidade1) {
                printf("Vencedor: %s\n", pais2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida! Tente novamente.\n");
    }

    return 0;
}