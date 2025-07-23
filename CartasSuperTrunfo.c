#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Função para calcular a densidade populacional
float calcular_densidade_populacional(int populacao, float area) {
    return (float)populacao / area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(float pib_bilhoes, int populacao) {
    return (pib_bilhoes * 1000000000) / populacao; // Convertendo bilhões para reais
}

int main() {
    // variáveis para a primeira carta
    char codigo1[4];
    char estado1[3];
    char cidade1[20];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1;
    float pib_per_capita1;
    
    // variáveis para a segunda carta
    char estado2[3];
    char codigo2[4];
    char cidade2[20];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o estado da primeira cidade (ex: MG): ");
    scanf("%s", estado1);    
    
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao1);
    
    printf("Digite a área da primeira cidade (em km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB da primeira cidade (em bilhões): ");
    scanf("%f", &pib1);
    
    printf("Digite o número de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos1);
    
    // Cadastro da segunda carta
    printf("\n=== CADASTRO DA SEGUNDA CARTA ===\n");
    printf("Digite o código da segunda cidade (ex: A02): ");
    scanf("%s", codigo2);

    printf("Digite o estado da segunda cidade (ex: SP): ");
    scanf("%s", estado2);    
    
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);
       
    // Exibição dos dados da primeira carta
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", calcular_densidade_populacional(populacao1, area1));
    printf("PIB per Capita: %.2f reais\n", calcular_pib_per_capita(pib1, populacao1));
    
    // Exibição dos dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", calcular_densidade_populacional(populacao2, area2));
    printf("PIB per Capita: %.2f reais\n", calcular_pib_per_capita(pib2, populacao2));

    return 0;
}
