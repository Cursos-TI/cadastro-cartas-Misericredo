#include <stdio.h>

int main() {

    // ===============================
    // DECLARAÇÃO DAS VARIÁVEIS
    // ===============================

    // As variáveis de texto seguem como no nível básico:
    char estado1, estado2;
    char codigo1[4], codigo2[4];
    char nome1[50], nome2[50];

    // População agora DEVE ser unsigned long int (conforme pedido)
    unsigned long int populacao1, populacao2;

    // Área, PIB e densidade precisam ser float ou double
    float area1, area2;
    float pib1, pib2;

    int pontos1, pontos2;

    // Variáveis derivadas (nível intermediário)
    float densidade1, densidade2;
    float pibCapita1, pibCapita2;

    // Super Poder (nível mestre)
    float super1, super2;

    // ===============================
    // ENTRADA DE DADOS CARTA 1
    // ===============================

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos1);

    // ===============================
    // ENTRADA DE DADOS CARTA 2
    // ===============================

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]s", nome2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontos2);

    // ===============================
    // CÁLCULOS — NÍVEL INTERMEDIÁRIO
    // ===============================

    // densidade populacional = população / área
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita = PIB / população
    pibCapita1 = pib1 / populacao1;
    pibCapita2 = pib2 / populacao2;

    // ===============================
    // SUPER PODER — NÍVEL MESTRE
    // ===============================
    // Super poder = soma de todos os atributos numéricos
    // + inverso da densidade (1/densidade)
    // Observação: conversões implícitas acontecem entre int, float e unsigned long

    super1 =
        populacao1 +
        area1 +
        pib1 +
        pontos1 +
        pibCapita1 +
        (1.0 / densidade1);

    super2 =
        populacao2 +
        area2 +
        pib2 +
        pontos2 +
        pibCapita2 +
        (1.0 / densidade2);

    // ===============================
    // EXIBIÇÃO DAS CARTAS
    // ===============================

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nome1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);
    printf("Super Poder: %.2f\n", super1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);
    printf("Super Poder: %.2f\n", super2);

    // ===============================
    // COMPARAÇÃO DAS CARTAS — NÍVEL MESTRE
    // ===============================
    // Lembrando:
    // - Densidade: vence o MENOR → usamos (densidade1 < densidade2)
    // - Outros atributos: vence o MAIOR → usamos (atributo1 > atributo2)
    // O operador relacional retorna 1 (verdadeiro) ou 0 (falso)

    printf("\n===== COMPARACAO =====\n");

    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidade1 < densidade2);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", pibCapita1 > pibCapita2);
    printf("Super Poder: Carta 1 venceu (%d)\n", super1 > super2);

    return 0;
}
