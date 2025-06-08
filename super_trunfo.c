#include <stdio.h>

int main() {
    // Dados da Carta 1 - Natal (RN)
    char estado1 = 'N';
    char codigo1[4] = "N01";
    char nomeCidade1[100] = "Natal";
    int populacao1 = 1350000;
    float area1 = 170.4;
    float pib1 = 10.23;
    int pontosTuristicos1 = 20;

    // Dados da Carta 2 - Rio de Janeiro (RJ)
    char estado2 = 'R';
    char codigo2[4] = "R01";
    char nomeCidade2[100] = "Rio de Janeiro";
    int populacao2 = 6747815;
    float area2 = 1255.3;
    float pib2 = 300.5;
    int pontosTuristicos2 = 50; 

    // Cálculo da densidade populacional e PIB per capita - Carta 1
    float densidade1 = (float)populacao1 / area1;
    float pibPerCapita1 = (pib1 * 1000000000) / populacao1;

    // Cálculo da densidade populacional e PIB per capita - Carta 2
    float densidade2 = (float)populacao2 / area2;
    float pibPerCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos dados da Carta 1 (Natal)
    printf("\n--- Carta 1 ---\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

    // Exibição dos dados da Carta 2 (Rio de Janeiro)
    printf("\n--- Carta 2 ---\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    return 0;
}
