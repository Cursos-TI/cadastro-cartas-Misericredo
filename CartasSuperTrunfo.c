#include <stdio.h>   // Biblioteca padrão para entrada e saída

int main() {

    /*
        =======================================================
        =============== DECLARAÇÃO DA CARTA 1 ================
        =======================================================
    */

    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Novas variáveis calculadas
    float densidade1;      // população / área
    float pibPerCapita1;   // PIB / população


    // ================== ENTRADA DA CARTA 1 ==================

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf(" %d", &populacao1);

    printf("Area (km²): ");
    scanf(" %f", &area1);

    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);



    /*
        =======================================================
        =========== CÁLCULOS DA CARTA 1 (NOVO!) ==============
        =======================================================

        Fórmulas:
        - Densidade = população / área
        - PIB per capita = PIB / população
    */

    densidade1 = populacao1 / area1;
    pibPerCapita1 = pib1 / populacao1;



    /*
        =======================================================
        =============== DECLARAÇÃO DA CARTA 2 ================
        =======================================================
    */

    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    float densidade2;
    float pibPerCapita2;


    // ================== ENTRADA DA CARTA 2 ==================

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf(" %3s", codigo2);

    printf("Nome da Cidade: ");
   	scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf(" %d", &populacao2);

    printf("Area (km²): ");
    scanf(" %f", &area2);

    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);


    /*
        =======================================================
        =========== CÁLCULOS DA CARTA 2 (NOVO!) ==============
        =======================================================
    */

    densidade2 = populacao2 / area2;
    pibPerCapita2 = pib2 / populacao2;


    /*
        =======================================================
        ================= EXIBIÇÃO FINAL ======================
        =======================================================
    */

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);


    return 0;
}