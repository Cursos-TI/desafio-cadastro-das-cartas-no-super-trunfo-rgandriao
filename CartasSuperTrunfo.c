#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    printf("Cadastrar Cartas\n");
    
    //Variaveis para 1 carta
    int população1;
    int pontosTuristicos1;
    float area1;
    float pib1;
    char estado1;
    char codigoCidade[30];
    char codigo1[5];
    
    //Variaveis para 2 carta
    int população2;
    int pontosTuristicos2;
    float area2;
    float pib2;
    char estado2;
    char codigoCidade[30];
    char codigo2[5];

    // solicitacao ao usuario

    printf("Cadastro da carta 1:\n");
    //dados do estado da carta1
    printf("informe o estado:");
    scanf("%c",&estado1);
    //dados do codigo da carta1
    printf("Informe o código da carta:");
    scanf("%s", codigo1);
    //dados do nome da cidade da carta1
    printf("Informe o nome da cidade: ");
    scanf("%[^\n]", nomeCidade1);
    //dados da populacao da carta1
    printf("Informe a população: ");
    scanf("%d", &populacao1);
    //dados da area da carta 1
    printf("Informe a área (em km²): ");
    scanf("%f", &area1);
    //dados do pib da carta1
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    //dados do ponto turisticos da carta 1
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // DADOS CARTA 2

    printf("\nCadastro da Carta 2:\n");
     //dados do codigo da carta2
    printf("Informe o estado: ");
    scanf(" %c", &estado2);
    //dados do codigo da carta2
    printf("Informe o código da carta: ");
    scanf("%s", codigo2);
    //dados do nome da cidade da carta2
    printf("Informe o nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);
    //dados da populacao da carta2
    printf("Informe a população: ");
    scanf("%d", &populacao2);
    //dados da area da carta 2
    printf("Informe a área (em km²): ");
    scanf("%f", &area2);
    //dados do pib da carta2
    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    //dados do ponto turisticos da carta 2
    printf("Informe o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Exibição dos Dados da 1 Carta

    printf("\ncarta1:\n");
    printf("Estado:%c\n",estado1);
    printf("Codigo:%s\n",codigo1);
    printf("Cidade:%s\n", codigoCidade1);
    printf("População:%d\n",populacao1);
    printf("Área:%f\n", area1);
    printf("PIB:%f\n", pib1);
    printf("Pontos turísticos:%d\n",pontosTuristicos1);

    // Exibição dos Dados da 2 Carta

    printf("\ncarta2:\n");
    printf("Estado:%c\n",estado2);
    printf("Codigo:%s\n",codigo2);
    printf("Cidade:%s\n", codigoCidade2);
    printf("População:%d\n",populacao2);
    printf("Área:%f\n", area2);
    printf("PIB:%f\n", pib2);
    printf("Pontos turísticos:%d\n",pontosTuristicos2);
    

    return 0;
}
