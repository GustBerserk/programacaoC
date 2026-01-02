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

    //Exibe a letra, que representa o estado, informada pelo usuário
    printf("Estado: %s\n", estado);

    //Exibe o nome da cidade informada pelo usuário
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("Codigo da carta: %s\n", codigo_carta);
    printf("População: %d habitantes\n", populacao);
    printf("Pontos turisticos: %d\n", pontos_turisticos);
    printf("Área: %f km2\n", area);
    printf("PIB: %f bilhões de reais\n", pib);

    printf("-------------------------------------------------------------------------------\n");

    printf("Informe os dados da segunda carta:\n");

    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Nome da cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("Codigo da carta: \n");
    scanf("%s", &codigo_carta2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Quantidade de pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    printf("Area: \n");
    scanf("%f", &area2);

    printf("PIB:\n");
    scanf("%f", &pib2);

    printf("\n\n");

    printf("CARTA 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Nome da cidade: %s\n", nome_cidade2);
    printf("Codigo da carta: %s\n", &codigo_carta2);
    printf("População: %d\n", populacao2);
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);
    printf("Area: %f km2\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    

    
    return 0;
    
}