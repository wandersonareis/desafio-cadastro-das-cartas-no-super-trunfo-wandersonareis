#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // variáveis para a primeira carta
    char codigo1[4];
    char nome1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    
    // variáveis para a segunda carta
    char codigo2[4];
    char nome2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    
    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome1);
    
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
    printf("Digite o código da segunda cidade (ex: B02): ");
    scanf("%s", codigo2);
    
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome2);

    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    
    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);
    
    // Exibição dos dados da primeira carta
    printf("\n=== DADOS DA PRIMEIRA CARTA ===\n");
    printf("Código: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos turísticos: %d\n", pontos_turisticos1);
    
    // Exibição dos dados da segunda carta
    printf("\n=== DADOS DA SEGUNDA CARTA ===\n");
    printf("Código: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos turísticos: %d\n", pontos_turisticos2);

    return 0;
}
