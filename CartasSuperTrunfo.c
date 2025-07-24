#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

// Função para calcular a densidade populacional
float calcular_densidade_populacional(unsigned long int populacao, float area)
{
    return (float)populacao / area;
}

// Função para calcular o PIB per capita
float calcular_pib_per_capita(float pib_bilhoes, unsigned long int populacao)
{
    return (pib_bilhoes * 1000000000) / populacao;
}

// Função para calcular o Super Poder
float calcular_super_poder(unsigned long int populacao, float area, float pib, int pontos_turisticos, float pib_per_capita, float densidade_populacional)
{
    return (float)populacao + area + pib + (float)pontos_turisticos + pib_per_capita + (1.0 / densidade_populacional);
}

// Função para comparar dois valores (retorna 1 se valor1 > valor2, 0 caso contrário)
int comparar_maior(float valor1, float valor2)
{
    return valor1 > valor2;
}

// Função para comparar densidade populacional (retorna 1 se valor1 < valor2, 0 caso contrário)
int comparar_densidade(float densidade1, float densidade2)
{
    return densidade1 < densidade2;
}

int main()
{
    // Declaração das variáveis
    char codigo1[4], codigo2[4];
    char estado1[3], estado2[3];
    char cidade1[20], cidade2[20];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade_populacional1, densidade_populacional2;
    float pib_per_capita1, pib_per_capita2;
    float super_poder1, super_poder2;

    printf("=== CADASTRO DA PRIMEIRA CARTA ===\n");
    printf("Digite o código da primeira cidade (ex: A01): ");
    scanf("%s", codigo1);

    printf("Digite o estado da primeira cidade (ex: MG): ");
    scanf("%s", estado1);

    printf("Digite o nome da primeira cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população da primeira cidade: ");
    scanf("%lu", &populacao1);

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
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda cidade (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da segunda cidade (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Cálculos para a primeira carta
    densidade_populacional1 = calcular_densidade_populacional(populacao1, area1);
    pib_per_capita1 = calcular_pib_per_capita(pib1, populacao1);
    super_poder1 = calcular_super_poder(populacao1, area1, pib1, pontos_turisticos1, pib_per_capita1, densidade_populacional1);

    // Cálculos para a segunda carta
    densidade_populacional2 = calcular_densidade_populacional(populacao2, area2);
    pib_per_capita2 = calcular_pib_per_capita(pib2, populacao2);
    super_poder2 = calcular_super_poder(populacao2, area2, pib2, pontos_turisticos2, pib_per_capita2, densidade_populacional2);

    // Exibição dos dados da primeira carta
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("Estado: %s\n", estado1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

    // Exibição dos dados da segunda carta
    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    // Declaração da variável para o menu
    int opcao;

    // Loop do menu interativo
    do
    {
        printf("\n=== MENU DE COMPARAÇÃO ===\n");
        printf("Escolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Número de pontos turísticos\n");
        printf("5 - Densidade demográfica\n");
        printf("6 - Sair\n");
        printf("Digite o número da opção desejada: ");
        scanf("%d", &opcao);

        if (opcao != 6)
        {
            printf("\n=== RESULTADO DA COMPARAÇÃO ===\n");
        }

        switch (opcao)
        {
        case 1: // População
            printf("Atributo: População\n");
            printf("Carta 1 - %s: %lu\n", cidade1, populacao1);
            printf("Carta 2 - %s: %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2)
            {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            }
            else if (populacao2 > populacao1)
            {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
            break;
        case 2: // Área
            printf("Atributo: Área\n");
            printf("Carta 1 - %s: %.2f km²\n", cidade1, area1);
            printf("Carta 2 - %s: %.2f km²\n", cidade2, area2);
            if (area1 > area2)
            {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            }
            else if (area2 > area1)
            {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
            break;
        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 - %s: %.2f bilhões\n", cidade1, pib1);
            printf("Carta 2 - %s: %.2f bilhões\n", cidade2, pib2);
            if (pib1 > pib2)
            {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            }
            else if (pib2 > pib1)
            {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
            break;
        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("Carta 1 - %s: %d\n", cidade1, pontos_turisticos1);
            printf("Carta 2 - %s: %d\n", cidade2, pontos_turisticos2);
            if (pontos_turisticos1 > pontos_turisticos2)
            {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            }
            else if (pontos_turisticos2 > pontos_turisticos1)
            {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
            break;
        case 5: // Densidade demográfica (menor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidade_populacional1);
            printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidade_populacional2);
            if (densidade_populacional1 < densidade_populacional2)
            {
                printf("Vencedor: Carta 1 (%s)\n", cidade1);
            }
            else if (densidade_populacional2 < densidade_populacional1)
            {
                printf("Vencedor: Carta 2 (%s)\n", cidade2);
            }
            else
            {
                printf("Empate!\n");
            }
            break;
        case 6: // Sair
            printf("Saindo do jogo. Obrigado por jogar!\n");
            break;
        default:
            printf("Opção inválida! Tente novamente.\n");
        }

        if (opcao != 6)
        {
            printf("\nPressione Enter para continuar...");
            getchar(); // Limpa o buffer
            getchar(); // Aguarda o usuário pressionar Enter
        }

    } while (opcao != 6);

    return 0;
}
