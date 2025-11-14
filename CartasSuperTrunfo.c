#include <stdio.h>   // Biblioteca padrão para entrada e saída de dados

int main() {

    /*
        =======================================================
        =============== DECLARAÇÃO DA CARTA 1 ================
        =======================================================

        Aqui declaramos todas as variáveis que serão usadas 
        para armazenar as informações da primeira carta.
        Cada campo segue o tipo solicitado no enunciado.
    */

    char estado1;                 // Armazena uma letra de A a H
    char codigo1[4];              // Armazena o código da carta (ex: A01)
    char nomeCidade1[50];         // Nome da cidade (string com espaços)
    int populacao1;               // População da cidade
    float area1;                  // Área da cidade em km²
    float pib1;                   // PIB em bilhões
    int pontosTuristicos1;        // Quantidade de pontos turísticos

    // =======================================================
    // =================== ENTRADA CARTA 1 ===================
    // =======================================================

    printf("=== Cadastro da Carta 1 ===\n");

    // Lê apenas 1 caractere. O espaço antes de %c evita captura do ENTER anterior.
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    // Lê o código da carta. %3s limita a leitura para evitar erro.
    printf("Codigo da Carta (ex: A01): ");
    scanf(" %3s", codigo1);

    // Lê a linha inteira, aceitando espaços no nome da cidade.
    printf("Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    // Lê a população inteira
    printf("Populacao: ");
    scanf(" %d", &populacao1);

    // Lê área
    printf("Area (km²): ");
    scanf(" %f", &area1);

    // Lê PIB
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);

    // Lê quantidade de pontos turísticos
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);



    /*
        =======================================================
        =============== DECLARAÇÃO DA CARTA 2 ================
        =======================================================

        As variáveis abaixo fazem exatamente o mesmo papel 
        que as da carta 1, só que agora armazenam os dados 
        da segunda carta.
    */

    char estado2;             
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // =======================================================
    // =================== ENTRADA CARTA 2 ===================
    // =======================================================

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
        ================= EXIBIÇÃO DOS DADOS =================
        =======================================================

        Aqui apenas imprimimos tudo o que foi lido do usuário.
        Não existe lógica de jogo, apenas apresentação das duas cartas.
    */

    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);

    // Finaliza o programa
    return 0;
}