#include <stdio.h>
#include <string.h>

int main() {

    // ===== CARTAS PRÉ-CADASTRADAS =====
    char pais1[50] = "Brasil";
    int populacao1 = 203000000;
    float area1 = 8515767.0;
    float pib1 = 1868.0;
    int pontos1 = 25;

    char pais2[50] = "Argentina";
    int populacao2 = 46000000;
    float area2 = 2780400.0;
    float pib2 = 632.0;
    int pontos2 = 18;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int atributo1, atributo2;
    float valor1_c1 = 0, valor1_c2 = 0;
    float valor2_c1 = 0, valor2_c2 = 0;

    // ===== MENU PRIMEIRO ATRIBUTO =====
    printf("=== SUPER TRUNFO - DESAFIO FINAL ===\n\n");

    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("Opção: ");
    scanf("%d", &atributo1);

    // ===== MENU SEGUNDO ATRIBUTO (DINÂMICO) =====
    printf("\nEscolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != atributo1) {
            switch(i) {
                case 1: printf("1 - População\n"); break;
                case 2: printf("2 - Área\n"); break;
                case 3: printf("3 - PIB\n"); break;
                case 4: printf("4 - Pontos Turísticos\n"); break;
                case 5: printf("5 - Densidade Demográfica\n"); break;
            }
        }
    }

    printf("Opção: ");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Erro: Você escolheu o mesmo atributo duas vezes!\n");
        return 0;
    }

    // ===== FUNÇÃO PARA DEFINIR VALORES =====
    for (int i = 0; i < 2; i++) {

        int escolha = (i == 0) ? atributo1 : atributo2;

        switch(escolha) {
            case 1:
                if (i == 0) {
                    valor1_c1 = populacao1;
                    valor1_c2 = populacao2;
                } else {
                    valor2_c1 = populacao1;
                    valor2_c2 = populacao2;
                }
                break;

            case 2:
                if (i == 0) {
                    valor1_c1 = area1;
                    valor1_c2 = area2;
                } else {
                    valor2_c1 = area1;
                    valor2_c2 = area2;
                }
                break;

            case 3:
                if (i == 0) {
                    valor1_c1 = pib1;
                    valor1_c2 = pib2;
                } else {
                    valor2_c1 = pib1;
                    valor2_c2 = pib2;
                }
                break;

            case 4:
                if (i == 0) {
                    valor1_c1 = pontos1;
                    valor1_c2 = pontos2;
                } else {
                    valor2_c1 = pontos1;
                    valor2_c2 = pontos2;
                }
                break;

            case 5:
                if (i == 0) {
                    valor1_c1 = densidade1;
                    valor1_c2 = densidade2;
                } else {
                    valor2_c1 = densidade1;
                    valor2_c2 = densidade2;
                }
                break;

            default:
                printf("Opção inválida!\n");
                return 0;
        }
    }

    // ===== SOMA DOS ATRIBUTOS =====
    float soma1 = valor1_c1 + valor2_c1;
    float soma2 = valor1_c2 + valor2_c2;

    // ===== RESULTADO =====
    printf("\n=== RESULTADO FINAL ===\n\n");

    printf("%s - Soma: %.2f\n", pais1, soma1);
    printf("%s - Soma: %.2f\n\n", pais2, soma2);

    // Operador ternário para decidir vencedor
    if (soma1 == soma2) {
        printf("Empate!\n");
    } else {
        char vencedor[50];
        strcpy(vencedor, (soma1 > soma2) ? pais1 : pais2);
        printf("Vencedor: %s\n", vencedor);
    }

    return 0;
}