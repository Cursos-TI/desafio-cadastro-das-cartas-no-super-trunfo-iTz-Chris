#include <stdio.h>

int main () {

    // declaração de variáveis para armazenamento dos dados das duas cartas

    char estado1[10], codigoCarta1[5], NomeCidade1[50], estado2[10], codigoCarta2[5], NomeCidade2[50];
    int pontosTuristicos1, pontosTuristicos2;
    unsigned long int populacao1, populacao2;
    float area1, pib1, area2, pib2, densidade1, densidade2, pibPerCapita1, pibPerCapita2;


    // Lendo os dados da carta 1:

    printf ("insira os dados da Carta 1:\n");
    printf ("Informe o estado com uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf ("%s", & estado1);
    printf ("Informe o código da carta com a letra do estado seguido por um número de 01 a 04: \n");
    scanf ("%s", & codigoCarta1);
    printf ("Nome da cidade: \n");
    scanf ("%s", & NomeCidade1);
    printf ("População: \n");
    scanf ("%u", & populacao1);
    printf ("Área em quilômetros quadrados: \n");
    scanf ("%f", & area1);
    printf ("PIB da cidade: \n");
    scanf ("%f", & pib1);
    printf ("Pontos turísticos da cidade: \n");
    scanf ("%i", & pontosTuristicos1);


        // Lendo os dados da carta 2:

        printf (" Insira os dados da Carta 2:\n");
        printf ("Informe o estado com uma letra de 'A' a 'H' (representando um dos oito estados): \n");
        scanf ("%s", & estado2);
        printf ("Informe o código da carta com a letra do estado seguido por um número de 01 a 04: \n");
        scanf ("%s", & codigoCarta2);
        printf ("Nome da cidade: \n");
        scanf ("%s", & NomeCidade2);
        printf ("População: \n");
        scanf ("%u", & populacao2);
        printf ("Área em quilômetros quadrados: \n");
        scanf ("%f", & area2);
        printf ("PIB da cidade: \n");
        scanf ("%f", & pib2);
        printf ("Pontos turísticos da cidade: \n");
        scanf ("%i", & pontosTuristicos2);


        // Cálculo da densidade populacional e PIB per capita:
        
        densidade1 = populacao1 / area1;
        pibPerCapita1 = pib1 * 1000000000 / populacao1;

        densidade2 = populacao2 / area2;
        pibPerCapita2 = pib2 * 1000000000 / populacao2;


        // Cálculo do "Super Poder":

        float superPoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + pibPerCapita1 + (1 / densidade1);
        float superPoder2 = populacao2 + area2 + pib2 + pontosTuristicos2 + pibPerCapita2 + (1 / densidade2);


    // Exibindo informações da carta 1:

    printf("\n");
    printf ("Carta 1: \n");
    printf ("Estado: %s\n", estado1);
    printf ("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("População: %u\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %i\n", pontosTuristicos1);
    printf("Densidade populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita1);


    // Exibindo informações da carta 2:

    printf ("\n");
    printf ("Carta 2: \n");
    printf ("Estado: %s\n", estado2);
    printf ("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("População: %u\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %i\n", pontosTuristicos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

    // Exibindo comparações das duas cartas:

    printf ("\n");
    printf ("Comparação de cartas (1 para verdadeiro, 0 para falso): \n");
    printf("População da carta 1 maior que carta 2? (%i)\n", populacao1 > populacao2);
    printf("Área da carta 1 maior que carta 2? (%i)\n", area1 > area2);
    printf("PIB da carta 1 maior que carta 2? (%i)\n", pib1 > pib2);
    printf("Pontos turísticos da carta 1 mais que a carta 2? (%i)\n", pontosTuristicos1 > pontosTuristicos2);
    printf("Densidade populacional da carta 1 é menor que da carta 2? (%i)\n", densidade1 < densidade2);
    printf("PIB per Capita da carta 1 maior que carta 2? (%i)\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder da carta 1 ganha da carta 2? (%i)\n", superPoder1 > superPoder2);




    return 0;


    





}
