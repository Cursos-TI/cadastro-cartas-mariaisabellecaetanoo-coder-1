#include <stdio.h>

int main() {

    // ===== CARTA 1 =====
    char estado1;
    char nomeEstado1[50];
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos1;

    // NOVAS VARIÁVEIS
    float densidade1, pibPerCapita1;

    // ===== CARTA 2 =====
    char estado2;
    char nomeEstado2[50];
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos2;

    // NOVAS VARIÁVEIS
    float densidade2, pibPerCapita2;

    // ===== ENTRADA CARTA 1 =====
    printf("=== Cadastro da Carta 1 ===\n");

    printf("Letra do Estado (A a H): ");
    scanf(" %c", &estado1);
    getchar();

    printf("Nome do Estado: ");
    scanf(" %[^\n]", nomeEstado1);

    printf("Codigo da Carta (ex: A01): ");
    scanf("%s", codigo1);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    // ===== ENTRADA CARTA 2 =====
    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Letra do Estado (A a H): ");
    scanf(" %c", &estado2);
    getchar();

    printf("Nome do Estado: ");
    scanf(" %[^\n]", nomeEstado2);

    printf("Codigo da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhões): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // ===== SAÍDA =====
    printf("\n=== Carta 1 ===\n");
    printf("Estado: %c - %s\n", estado1, nomeEstado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    printf("\n=== Carta 2 ===\n");
    printf("Estado: %c - %s\n", estado2, nomeEstado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // ===== COMPARAÇÕES =====
     // NOVA VARIÁVEL
    float superPoder1, superPoder2;
    
    printf("\nComparacao de Cartas:\n\n");

    printf("Populacao: Carta %d venceu (%d)\n", 
        populacao1 > populacao2 ? 1 : 2,
        populacao1 > populacao2);

    printf("Area: Carta %d venceu (%d)\n", 
        area1 > area2 ? 1 : 2,
        area1 > area2);

    printf("PIB: Carta %d venceu (%d)\n", 
        pib1 > pib2 ? 1 : 2,
        pib1 > pib2);

    printf("Pontos Turisticos: Carta %d venceu (%d)\n", 
        pontos1 > pontos2 ? 1 : 2,
        pontos1 > pontos2);

    // menor vence
    printf("Densidade Populacional: Carta %d venceu (%d)\n", 
        densidade1 < densidade2 ? 1 : 2,
        densidade1 < densidade2);

    printf("PIB per Capita: Carta %d venceu (%d)\n", 
        pibPerCapita1 > pibPerCapita2 ? 1 : 2,
        pibPerCapita1 > pibPerCapita2);

   printf("Super Poder: Carta %d venceu (%d)\n", 
        superPoder1 > superPoder2 ? 1 : 2,
        superPoder1 > superPoder2);

    return 0;
}