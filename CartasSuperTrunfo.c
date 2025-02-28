#include <stdio.h>

int main () {

    // declaração de varáveis para armazenamento dos dados das duas cartas

    char estado1[10], codigoCarta1[5], NomeCidade1[50], estado2[10], codigoCarta2[5], NomeCidade2[50];
    int populacao1, pontosTuristicos1, populacao2, pontosTuristicos2;
    float area1, pib1, area2, pib2;


    // Lendo os dados da carta 1:
    printf ("Desafio Novato\n");
    printf ("insira os dados da Carta 1:\n");
    printf ("Informe o estado com uma letra de 'A' a 'H' (representando um dos oito estados): \n");
    scanf ("%s", & estado1);
    printf ("Informe o código da carta com a letra do estado seguido por um número de 01 a 04: \n");
    scanf ("%s", & codigoCarta1);
    printf ("Nome da cidade: \n");
    scanf ("%s", & NomeCidade1);
    printf ("População: \n");
    scanf ("%i", & populacao1);
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
        scanf ("%i", & populacao2);
        printf ("Área em quilômetros quadrados: \n");
        scanf ("%f", & area2);
        printf ("PIB da cidade: \n");
        scanf ("%f", & pib2);
        printf ("Pontos turísticos da cidade: \n");
        scanf ("%i", & pontosTuristicos2);


    // Exibindo informações da carta 1:

    printf("\n");
    printf ("Carta 1: \n");
    printf ("Estado: %s\n", estado1);
    printf ("Código da carta: %s\n", codigoCarta1);
    printf("Nome da cidade: %s\n", NomeCidade1);
    printf("População: %i\n", populacao1);
    printf("Área: %f\n", area1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %i\n", pontosTuristicos1);


    // Exibindo informações da carta 2:

    printf ("\n");
    printf ("Carta 2: \n");
    printf ("Estado: %s\n", estado2);
    printf ("Código da carta: %s\n", codigoCarta2);
    printf("Nome da cidade: %s\n", NomeCidade2);
    printf("População: %i\n", populacao2);
    printf("Área: %f\n", area2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %i\n", pontosTuristicos2);


    return 0;





}
