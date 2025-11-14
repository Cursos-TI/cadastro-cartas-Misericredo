#include <stdio.h>

/*
  Super Trunfo - Nível Mestre
  Comparação avançada com dois atributos escolhidos pelo jogador.
  Integra com o cadastro de duas cartas (países) já presente no seu código.
*/

int main() {

    /* ---------------------------
       Cadastro / variáveis básicas
       --------------------------- */
    char nome1[50], nome2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;

    /* Variáveis derivadas */
    float densidade1, densidade2;
    float pibCapita1, pibCapita2;

    /* Opções escolhidas pelo jogador (1..5) */
    int primeiraOpcao = 0;
    int segundaOpcao = 0;

    /* Valores usados na comparação (float para uniformizar soma) */
    float valor1_attrA = 0.0f, valor2_attrA = 0.0f;
    float valor1_attrB = 0.0f, valor2_attrB = 0.0f;

    /* Somas dos atributos */
    float soma1 = 0.0f, soma2 = 0.0f;

    /* ---------------------------
       Entrada: Carta 1
       --------------------------- */
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

    /* ---------------------------
       Entrada: Carta 2
       --------------------------- */
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

    /* ---------------------------
       Cálculos de segurança (evitar divisão por zero)
       --------------------------- */
    if (area1 == 0.0f) {          // evita divisão por zero na densidade
        densidade1 = 0.0f;
    } else {
        densidade1 = populacao1 / area1;
    }

    if (area2 == 0.0f) {
        densidade2 = 0.0f;
    } else {
        densidade2 = populacao2 / area2;
    }

    if (populacao1 == 0) {        // evita divisão por zero no PIB per capita
        pibCapita1 = 0.0f;
    } else {
        pibCapita1 = pib1 / populacao1;
    }

    if (populacao2 == 0) {
        pibCapita2 = 0.0f;
    } else {
        pibCapita2 = pib2 / populacao2;
    }

    /* ---------------------------
       Menu 1: escolha do primeiro atributo
       --------------------------- */
    printf("\n=== MENU: Escolha o PRIMEIRO atributo para comparar ===\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica (menor vence)\n");
    printf("Opcao: ");
    scanf("%d", &primeiraOpcao);

    /* Validação básica da primeira escolha */
    if (primeiraOpcao < 1 || primeiraOpcao > 5) {
        printf("Opcao invalida no primeiro menu. Encerrando.\n");
        return 0;
    }

    /* ---------------------------
       Menu 2: escolha do segundo atributo
       (dinâmico: não mostramos a opção já escolhida)
       --------------------------- */
    printf("\n=== MENU: Escolha o SEGUNDO atributo (diferente do primeiro) ===\n");

    /* Imprime todas as opções exceto a primeira escolhida (sem usar loop) */
    if (primeiraOpcao != 1) printf("1 - Populacao\n");
    if (primeiraOpcao != 2) printf("2 - Area\n");
    if (primeiraOpcao != 3) printf("3 - PIB\n");
    if (primeiraOpcao != 4) printf("4 - Pontos Turisticos\n");
    if (primeiraOpcao != 5) printf("5 - Densidade Demografica (menor vence)\n");

    printf("Opcao: ");
    scanf("%d", &segundaOpcao);

    /* Validação: não pode selecionar a mesma opção e precisa estar no intervalo 1..5 */
    if (segundaOpcao < 1 || segundaOpcao > 5) {
        printf("Opcao invalida no segundo menu. Encerrando.\n");
        return 0;
    }
    if (segundaOpcao == primeiraOpcao) {
        printf("Voce escolheu o mesmo atributo duas vezes. Encerrando.\n");
        return 0;
    }

    /* ---------------------------
       Preparar valores a comparar:
       Para uniformizar a soma, usamos floats (conversão explícita quando necessário).
       --------------------------- */
    /* Atributo A = primeiraOpcao */
    switch (primeiraOpcao) {
        case 1: /* População */
            valor1_attrA = (float) populacao1;
            valor2_attrA = (float) populacao2;
            break;
        case 2: /* Área */
            valor1_attrA = area1;
            valor2_attrA = area2;
            break;
        case 3: /* PIB */
            valor1_attrA = pib1;
            valor2_attrA = pib2;
            break;
        case 4: /* Pontos turísticos */
            valor1_attrA = (float) pontos1;
            valor2_attrA = (float) pontos2;
            break;
        case 5: /* Densidade (população / área) */
            valor1_attrA = densidade1;
            valor2_attrA = densidade2;
            break;
        default:
            /* Já validamos antes, mas deixamos default por segurança */
            printf("Erro inesperado na escolha do primeiro atributo.\n");
            return 0;
    }

    /* Atributo B = segundaOpcao */
    switch (segundaOpcao) {
        case 1: /* População */
            valor1_attrB = (float) populacao1;
            valor2_attrB = (float) populacao2;
            break;
        case 2: /* Área */
            valor1_attrB = area1;
            valor2_attrB = area2;
            break;
        case 3: /* PIB */
            valor1_attrB = pib1;
            valor2_attrB = pib2;
            break;
        case 4: /* Pontos turísticos */
            valor1_attrB = (float) pontos1;
            valor2_attrB = (float) pontos2;
            break;
        case 5: /* Densidade (população / área) */
            valor1_attrB = densidade1;
            valor2_attrB = densidade2;
            break;
        default:
            printf("Erro inesperado na escolha do segundo atributo.\n");
            return 0;
    }

    /* ---------------------------
       Comparações individuais (cada atributo).
       Para densidade: menor vence; para os outros: maior vence.
       Usamos operador ternário para formatar as mensagens "Carta 1 venceu / Carta 2 venceu / Empate".
       --------------------------- */

    printf("\n=== RESULTADOS PARCIAIS ===\n");

    /* Função auxiliar: string do atributo para exibição */
    const char *nomeAttrA =
        (primeiraOpcao == 1) ? "Populacao" :
        (primeiraOpcao == 2) ? "Area" :
        (primeiraOpcao == 3) ? "PIB" :
        (primeiraOpcao == 4) ? "Pontos Turisticos" :
        "Densidade Demografica";

    const char *nomeAttrB =
        (segundaOpcao == 1) ? "Populacao" :
        (segundaOpcao == 2) ? "Area" :
        (segundaOpcao == 3) ? "PIB" :
        (segundaOpcao == 4) ? "Pontos Turisticos" :
        "Densidade Demografica";

    /* --- Atributo A --- */
    printf("\nAtributo 1: %s\n", nomeAttrA);

    /* Exibe valores com formatação contextual (inteiro x float) */
    if (primeiraOpcao == 1) { /* População */
        printf("%s: %d\n", nome1, populacao1);
        printf("%s: %d\n", nome2, populacao2);
    } else if (primeiraOpcao == 4) { /* Pontos turísticos */
        printf("%s: %d\n", nome1, pontos1);
        printf("%s: %d\n", nome2, pontos2);
    } else if (primeiraOpcao == 5) { /* Densidade */
        printf("%s: %.2f hab/km²\n", nome1, densidade1);
        printf("%s: %.2f hab/km²\n", nome2, densidade2);
    } else { /* Área ou PIB */
        if (primeiraOpcao == 2) { /* Área */
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
        } else { /* PIB */
            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);
        }
    }

    /* Decide vencedor do atributo A */
    int vencedorA;
    if (primeiraOpcao == 5) { /* densidade: menor vence */
        vencedorA = (valor1_attrA < valor2_attrA) ? 1 : (valor2_attrA < valor1_attrA) ? 2 : 0;
    } else { /* maior vence */
        vencedorA = (valor1_attrA > valor2_attrA) ? 1 : (valor2_attrA > valor1_attrA) ? 2 : 0;
    }

    /* Mensagem usando ternário */
    printf("Resultado A: %s\n",
        (vencedorA == 1) ? nome1 :
        (vencedorA == 2) ? nome2 :
        "Empate!");

    /* --- Atributo B --- */
    printf("\nAtributo 2: %s\n", nomeAttrB);

    if (segundaOpcao == 1) { /* População */
        printf("%s: %d\n", nome1, populacao1);
        printf("%s: %d\n", nome2, populacao2);
    } else if (segundaOpcao == 4) { /* Pontos turísticos */
        printf("%s: %d\n", nome1, pontos1);
        printf("%s: %d\n", nome2, pontos2);
    } else if (segundaOpcao == 5) { /* Densidade */
        printf("%s: %.2f hab/km²\n", nome1, densidade1);
        printf("%s: %.2f hab/km²\n", nome2, densidade2);
    } else { /* Área ou PIB */
        if (segundaOpcao == 2) { /* Área */
            printf("%s: %.2f km²\n", nome1, area1);
            printf("%s: %.2f km²\n", nome2, area2);
        } else { /* PIB */
            printf("%s: %.2f bilhoes\n", nome1, pib1);
            printf("%s: %.2f bilhoes\n", nome2, pib2);
        }
    }

    /* Decide vencedor do atributo B */
    int vencedorB;
    if (segundaOpcao == 5) { /* densidade: menor vence */
        vencedorB = (valor1_attrB < valor2_attrB) ? 1 : (valor2_attrB < valor1_attrB) ? 2 : 0;
    } else { /* maior vence */
        vencedorB = (valor1_attrB > valor2_attrB) ? 1 : (valor2_attrB > valor1_attrB) ? 2 : 0;
    }

    printf("Resultado B: %s\n",
        (vencedorB == 1) ? nome1 :
        (vencedorB == 2) ? nome2 :
        "Empate!");

    /* ---------------------------
       Soma dos atributos (decisor final)
       --------------------------- */
    soma1 = valor1_attrA + valor1_attrB;
    soma2 = valor2_attrA + valor2_attrB;

    printf("\n=== Soma dos atributos ===\n");
    printf("%s: %.2f\n", nome1, soma1);
    printf("%s: %.2f\n", nome2, soma2);

    if (soma1 > soma2) {
        printf("\nResultado Final: %s venceu!\n", nome1);
    } else if (soma2 > soma1) {
        printf("\nResultado Final: %s venceu!\n", nome2);
    } else {
        printf("\nResultado Final: Empate!\n");
    }

    return 0;
}