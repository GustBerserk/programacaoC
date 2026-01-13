#include <stdio.h>

int main ()
{
    //Variavéis da primeira carta
    char estado[2];
    char nome_cidade[50];
    char codigo_carta[4];
    int populacao;
    int pontos_turisticos;
    double area;
    double pib;
    double densidade;
    double pib_per_capita;
    double pib_calc;
    float Poder;

    //Variáveis da segunda carta
    char estado2[2];
    char nome_cidade2[50];
    char codigo_carta2[4];
    int populacao2;
    int pontos_turisticos2;
    double area2;
    double pib2;
    double densidade2;
    double pib_per_capita2;
    double pib_calc2;
    float Poder2;


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
    scanf("%i", &populacao);
    
    //Pede a quatidade de pontos turisticos e armazena na variável "pontos turisticos"
    printf("Pontos turísticos: \n");
    scanf("%i", &pontos_turisticos);
    
    //Pede a area e armazena na variável "area"
    printf("Área: \n");
    scanf("%lf", &area);

    //Pede o PIB e armazena na variável "pib"
    printf("PIB: \n");
    scanf ("%lf", &pib);

    //Calcula o PIB em reais
    pib_calc = pib * 1000000000;

    //Calcula a densidade demográfica
    densidade = (long double)populacao / area;


    //Calcula o PIB per capita
    pib_per_capita = pib_calc / (long double)populacao;

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
    printf("População: %i habitantes\n", populacao);

    //Exibie a quantidade de pontos turisticos informada pelo usuário referente a primeira carta
    printf("Pontos turisticos: %i\n", pontos_turisticos);

    //Exibe a area informada pelo usuário referente a primeira carta
    printf("Área: %.2lf km2\n", area);

    //Exibe o PIB informado pelo usuário referente a primeira carta
    printf("PIB: %.2lf bilhões de reais\n", pib);

    printf("Densidade demográfica: %.2lf habitantes/km2\n", densidade);

    printf("PIB per capita: %.2lf reais\n", pib_per_capita);

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
    scanf("%i", &populacao2);

    //Pede a quantidade de pontos turisticos da segunda carta e armazenza na variável "pontos_turisticos2"
    printf("Quantidade de pontos turisticos: \n");
    scanf("%i", &pontos_turisticos2);

    //Pede a area da segunda carta e armazena na variavél "area2"
    printf("Area: \n");
    scanf("%lf", &area2);

    //Pede o PIB da segunda carta e armazena na variável "pib2"
    printf("PIB:\n");
    scanf("%lf", &pib2);

    //Calcula o PIB da segunda carta em reais
    pib_calc2 = pib2 * 1000000000;

    //Calcula a densidade demográfica da segunda carta
    densidade2 = (long double)populacao2 / area2;

    //Calcula o PIB per capita da segunda carta
    pib_per_capita2 = pib_calc2 / (long double)populacao2;

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

    //Exibe a quantidade de pontos turisticos informada pelo usuário referente a segunda carta
    printf("Quantidade de pontos turisticos: %d\n", pontos_turisticos2);

    //Exibe a area informada pelo usuário referente a segunda carta
    printf("Area: %.2lf km2\n", area2);

    //Exibe o PIB informado pelo usuário referente a segunda carta
    printf("PIB: %.2lf bilhões de reais\n", pib2);

    //Exibe a densidade demográfica calculada referente a segunda carta
    printf("Densidade demográfica: %.2lf habitantes/km2\n", densidade2);

    //Exibe o PIB per capita calculado referente a segunda carta
    printf("PIB per capita: %.2lf reais\n", pib_per_capita2);

    printf("\n\n");

    printf("-------------------------------------------------------------------------------\n");

    //Comparação entre as cartas
    printf("Comparação entre as cartas: \n");
    printf("\n");
    printf("Atributo: Resultado (1 = Carta 1 vence / 0 = Carta 2 vence)\n");

 
    //Calcula o poder da primeira e da segunda carta
    Poder = (float )populacao + (float) pontos_turisticos + area + pib + densidade + pib_per_capita;
    Poder2 = (float)populacao2 + (float)pontos_turisticos2 + area2 + pib2 + densidade2 + pib_per_capita2;

    //Exibe os resultados da comparação entre as cartas
    printf ("População: %d\n", populacao > populacao2);
    printf ("Pontos turísticos: %d\n", pontos_turisticos > pontos_turisticos2);
    printf ("Área: %d\n", area > area2);
    printf ("PIB: %d\n", pib > pib2);
    printf ("Densidade demográfica: %d\n", densidade > densidade2);
    printf ("PIB per capita: %d\n", pib_per_capita > pib_per_capita2);
    printf ("Poder da carta: %d\n", Poder > Poder2);
 
    return 0;
    
}