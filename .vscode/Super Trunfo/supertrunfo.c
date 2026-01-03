#include <stdio.h>

int main ()
{
    //Variavéis da primeira carta
    char estado[2];
    char nome_cidade[50];
    char codigo_carta[4];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

    //Variáveis da segunda carta
    char estado2[2];
    char nome_cidade2[50];
    char codigo_carta2[4];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float pib2;
    
    //Pede os dados da primeira carta
    printf ("Informe os dados da primeira carta: \n");
    
    //Pede a letra que representa um estado e armazena na variável "estado"
    printf("Estado: \n");
    scanf("%s", &estado);
    
    //Pede o nome da cidade e armazena na variável "nome_cidade"
    printf("Nome da cidade: \n");
    scanf("%s", &nome_cidade);
    
    //Pede o codigo da carta e armazena na variavél "codigo_carta"
    printf("Codigo da carta: \n");
    scanf("%s", &codigo_carta);
    
    //Pede a quantidade populacional e armazena da varivável "populacao"
    printf("População: \n");
    scanf("%d", &populacao);
    
    //Pede a quatidade de pontos turisticos e armazena na variável "pontos turisticos"
    printf("Pontos turísticos: \n");
    scanf("%d", &pontos_turisticos);
    
    //Pede a area e armazena na variável "area"
    printf("Área: \n");
    scanf("%f", &area);

    //Pede o PIB e armazena na variável "pib"
    printf("PIB: \n");
    scanf ("%f", &pib);

    //Pula duas linhas
    printf("\n\n");

    //Escreve a frase "CARTA 1"
    printf("CARTA 1: \n");

    //Exibe a letra que representa o estado informada pelo usuário referente a primeira carta
    printf("Estado: %s\n", estado);

    //Exibe o nome da cidade informada pelo usuário referente a primeira carta
    printf("Nome da cidade: %s\n", nome_cidade);

    //Exibe o codigo da carta informado pelo usuário referente a primeira carta
    printf("Codigo da carta: %s\n", codigo_carta);

    //Exibe a quantidade populacional informada pelo usuaŕio referente a primeira carta
    printf("População: %d habitantes\n", populacao);

    //Exibie a quantidade de pontos turisticos informada pelo usuário referente a primeira carta
    printf("Pontos turisticos: %d\n", pontos_turisticos);

    //Exibe a area informada pelo usuário referente a primeira carta
    printf("Área: %f km2\n", area);

    //Exibe o PIB informado pelo usuário referente a primeira carta
    printf("PIB: %f bilhões de reais\n", pib);

    printf("-------------------------------------------------------------------------------\n");

    //Escreve a frase "Informe os dados da segunda carta"
    printf("Informe os dados da segunda carta:\n");

    //Pede a letra que representa o estado da segunda carta e armazena na variável "estado2"
    printf("Estado: \n");
    scanf("%s", &estado2);

    //Pede o nome da cidade da segunda carta e armazena na variavel "nome_cidade2"
    printf("Nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    //Pede o codigo da segunda carta e armazena na variável "codigo_carta2"
    printf("Codigo da carta: \n");
    scanf("%s", &codigo_carta2);

    //Pede a quantidade populacional da segunda cara e armazenza na variável "populacao2"
    printf("População: \n");
    scanf("%d", &populacao2);

    //Pede a quantidade de pontos turisticos da segunda carta e armazenza na variável "pontos_turisticos2"
    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    //Pede a area da segunda carta e armazena na variavél "area2"
    printf("Area: \n");
    scanf("%f", &area2);

    //Pede o PIB da segunda carta e armazena na variável "pib2"
    printf("PIB:\n");
    scanf("%f", &pib2);

    //Pula duas linhas
    printf("\n\n");

    //Escreve a frase "CARTA 2"
    printf("CARTA 2: \n");

    //Exibe a letra que representa o estado informada pelo usuário referente a segunda carta
    printf("Estado: %s\n", estado2);

    //Exibe o nome da cidade informada pelo usuário referente a segunda carta
    printf("Nome da cidade: %s\n", nome_cidade2);

    //Exibe o codigo da carta informado pelo usuário referente a segunda carta      
    printf("Codigo da carta: %s\n", &codigo_carta2);

    //Exibe a quantidade populacional informada pelo usuário referente a segunda carta
    printf("População: %d\n", populacao2);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);

    //Exibe a area informada pelo usuário referente a segunda carta
    printf("Area: %f km2\n", area2);

    //Exibe o PIB informado pelo usuário referente a segunda carta
    printf("PIB: %f bilhões de reais\n", pib2);
    
    return 0;
    
}