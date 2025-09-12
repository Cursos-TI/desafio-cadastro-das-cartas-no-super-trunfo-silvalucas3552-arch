

#include <stdio.h>

struct Carta {
    char estado[30];
    char codigo[5];
    char cidade[30];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta carta1, carta2;

    printf("=== Cadastro da Carta 1 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta1.estado);
    printf("Codigo da carta: ");
    scanf(" %s", carta1.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta1.cidade);
    printf("Populacao: ");
    scanf("%d", &carta1.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta1.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta1.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta1.pontosTuristicos);

    // Calcula os valores derivados
    carta1.densidadePopulacional = carta1.populacao / carta1.area;
    carta1.pibPerCapita = carta1.pib / carta1.populacao;

    printf("\n=== Cadastro da Carta 2 ===\n");
    printf("Estado: ");
    scanf(" %[^\n]", carta2.estado);
    printf("Codigo da carta: ");
    scanf(" %s", carta2.codigo);
    printf("Nome da cidade: ");
    scanf(" %[^\n]", carta2.cidade);
    printf("Populacao: ");
    scanf("%d", &carta2.populacao);
    printf("Area (km²): ");
    scanf("%f", &carta2.area);
    printf("PIB (em bilhões): ");
    scanf("%f", &carta2.pib);
    printf("Numero de pontos turisticos: ");
    scanf("%d", &carta2.pontosTuristicos);

    // Calcula os valores derivados
    carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // Exibe os resultados
    printf("\n===== CARTA 1 =====\n");
    printf("Estado: %s\n", carta1.estado);
    printf("Codigo: %s\n", carta1.codigo);
    printf("Cidade: %s\n", carta1.cidade);
    printf("Populacao: %d\n", carta1.populacao);
    printf("Area: %.2f km²\n", carta1.area);
    printf("PIB: %.2f bilhoes\n", carta1.pib);
    printf("Pontos Turisticos: %d\n", carta1.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta1.densidadePopulacional);
    printf("PIB per capita: %.6f bilhoes/hab\n", carta1.pibPerCapita);

    printf("\n===== CARTA 2 =====\n");
    printf("Estado: %s\n", carta2.estado);
    printf("Codigo: %s\n", carta2.codigo);
    printf("Cidade: %s\n", carta2.cidade);
    printf("Populacao: %d\n", carta2.populacao);
    printf("Area: %.2f km²\n", carta2.area);
    printf("PIB: %.2f bilhoes\n", carta2.pib);
    printf("Pontos Turisticos: %d\n", carta2.pontosTuristicos);
    printf("Densidade Populacional: %.2f hab/km²\n", carta2.densidadePopulacional);
    printf("PIB per capita: %.6f bilhoes/hab\n", carta2.pibPerCapita);

carta2.densidadePopulacional = carta2.populacao / carta2.area;
    carta2.pibPerCapita = carta2.pib / carta2.populacao;

    // ===== Comparação =====
    printf("\n===== COMPARACAO =====\n");
    printf("Atributo escolhido: Populacao\n");

    printf("Carta 1 - %s (%s): %d habitantes\n", carta1.cidade, carta1.estado, carta1.populacao);
    printf("Carta 2 - %s (%s): %d habitantes\n", carta2.cidade, carta2.estado, carta2.populacao);

    if (carta1.populacao > carta2.populacao) {
        printf("Resultado: Carta 1 (%s) venceu!\n", carta1.cidade);
    } else if (carta2.populacao > carta1.populacao) {
        printf("Resultado: Carta 2 (%s) venceu!\n", carta2.cidade);
    } else {
        printf("Resultado: Empate!\n");

    return 0;
}

     

    return 0;
}
