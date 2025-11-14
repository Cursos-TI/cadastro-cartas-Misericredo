#include <stdio.h>

int main() {

    // ============================================================
    // DECLARAÇÃO DAS VARIÁVEIS DAS DUAS CARTAS
    // (Igual ao desafio anterior)
    // ============================================================

    char estado1[3], estado2[3];
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];

    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    // Variáveis calculadas
    float densidade1, densidade2;
    float pibCapita1, pibCapita2;

    // ============================================================
    // ENTRADA DE DADOS DA CARTA 1
    // ============================================================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (ex: SP): ");
    scanf("%s", estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // ============================================================
    // ENTRADA DE DADOS DA CARTA 2
    // ============================================================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ============================================================
    // CÁLCULOS: DENSIDADE POPULACIONAL E PIB per CAPITA
    // ============================================================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibCapita1 = pib1 / populacao1;
    pibCapita2 = pib2 / populacao2;

    // ============================================================
    // ESCOLHA DO ATRIBUTO PARA COMPARAÇÃO
    // (VOCÊ ESCOLHE DIRETAMENTE NO CÓDIGO)
    //
    // Opções possíveis:
    // 1 - População
    // 2 - Área
    // 3 - PIB
    // 4 - Densidade Populacional (a MENOR vence)
    // 5 - PIB per capita
    //
    // Para mudar o atributo, basta alterar o valor desta variável:
    // ============================================================

    int atributoEscolhido = 1;  // <<< ALTERE AQUI O ATRIBUTO >>>

    // ============================================================
    // COMPARAÇÃO DAS CARTAS USANDO IF / ELSE
    // ============================================================

    printf("\n=== Comparacao de Cartas ===\n");

    if (atributoEscolhido == 1) {

        // ----- POPULAÇÃO -----
        printf("Atributo: Populacao\n");

        printf("Carta 1 (%s): %d\n", nome1, populacao1);
        printf("Carta 2 (%s): %d\n", nome2, populacao2);

        if (populacao1 > populacao2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }

    } else if (atributoEscolhido == 2) {

        // ----- ÁREA -----
        printf("Atributo: Area\n");

        printf("Carta 1 (%s): %.2f km²\n", nome1, area1);
        printf("Carta 2 (%s): %.2f km²\n", nome2, area2);

        if (area1 > area2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }

    } else if (atributoEscolhido == 3) {

        // ----- PIB -----
        printf("Atributo: PIB\n");

        printf("Carta 1 (%s): %.2f bilhoes\n", nome1, pib1);
        printf("Carta 2 (%s): %.2f bilhoes\n", nome2, pib2);

        if (pib1 > pib2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }

    } else if (atributoEscolhido == 4) {

        // ----- DENSIDADE POPULACIONAL -----
        // *Regra especial: MENOR valor vence*
        printf("Atributo: Densidade Populacional\n");

        printf("Carta 1 (%s): %.2f hab/km²\n", nome1, densidade1);
        printf("Carta 2 (%s): %.2f hab/km²\n", nome2, densidade2);

        if (densidade1 < densidade2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }

    } else if (atributoEscolhido == 5) {

        // ----- PIB per CAPITA -----
        printf("Atributo: PIB per capita\n");

        printf("Carta 1 (%s): %.2f\n", nome1, pibCapita1);
        printf("Carta 2 (%s): %.2f\n", nome2, pibCapita2);

        if (pibCapita1 > pibCapita2) {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome1);
        } else {
            printf("Resultado: Carta 2 (%s) venceu!\n", nome2);
        }
    }

    return 0;
}