#include <stdio.h>

int main() {

    // ============================================================
    // DECLARAÇÃO DAS VARIÁVEIS DAS DUAS CARTAS
    // ============================================================

    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    float densidade1, densidade2;

    int opcao; // opção do menu


    // ============================================================
    // CADASTRO DA CARTA 1
    // ============================================================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Nome do Pais: ");
    scanf(" %[^\n]s", nome1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);


    // ============================================================
    // CADASTRO DA CARTA 2
    // ============================================================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Nome do Pais: ");
    scanf(" %[^\n]s", nome2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);


    // ============================================================
    // CÁLCULO DAS DENSIDADES DEMOGRÁFICAS
    // ============================================================

    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;


    // ============================================================
    // MENU INTERATIVO (switch)
    // ============================================================

    printf("\n=== MENU DE COMPARACAO ===\n");
    printf("Escolha um atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n=== RESULTADO ===\n");

    // ============================================================
    // LÓGICA DE COMPARAÇÃO COM SWITCH
    // E IF ANINHADO
    // ============================================================

    switch (opcao) {

        // --------------------------------------------------------
        case 1:  // População
            printf("Comparando Populacao:\n");

            printf("%s: %d\n", nome1, populacao1);
            printf("%s: %d\n", nome2, populacao2);

            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nome1);
            } 
            else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nome2);
            } 
            else {
                printf("Empate!\n");
            }

            break;

        // --------------------------------------------------------
        case 2:  // Área
            printf("Comparando Area:\n");

            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);

            if (area1 > area2) {
                printf("Vencedor: %s\n", nome1);
            } 
            else if (area2 > area1) {
                printf("Vencedor: %s\n", nome2);
            } 
            else {
                printf("Empate!\n");
            }

            break;

        // --------------------------------------------------------
        case 3:  // PIB
            printf("Comparando PIB:\n");

            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);

            if (pib1 > pib2) {
                printf("Vencedor: %s\n", nome1);
            } 
            else if (pib2 > pib1) {
                printf("Vencedor: %s\n", nome2);
            } 
            else {
                printf("Empate!\n");
            }

            break;

        // --------------------------------------------------------
        case 4:  // Pontos turísticos
            printf("Comparando Pontos Turisticos:\n");

            printf("%s: %d\n", nome1, pontos1);
            printf("%s: %d\n", nome2, pontos2);

            if (pontos1 > pontos2) {
                printf("Vencedor: %s\n", nome1);
            } 
            else if (pontos2 > pontos1) {
                printf("Vencedor: %s\n", nome2);
            } 
            else {
                printf("Empate!\n");
            }

            break;

        // --------------------------------------------------------
        case 5:  // Densidade demográfica
            // Regra especial: MENOR vence!
            printf("Comparando Densidade Demografica:\n");

            printf("%s: %.2f hab/km²\n", nome1, densidade1);
            printf("%s: %.2f hab/km²\n", nome2, densidade2);

            if (densidade1 < densidade2) {
                printf("Vencedor: %s (menor densidade)\n", nome1);
            } 
            else if (densidade2 < densidade1) {
                printf("Vencedor: %s (menor densidade)\n", nome2);
            } 
            else {
                printf("Empate!\n");
            }

            break;

        // --------------------------------------------------------
        default:
            printf("Opcao invalida! Escolha um numero de 1 a 5.\n");
            break;
    }

    return 0;
}