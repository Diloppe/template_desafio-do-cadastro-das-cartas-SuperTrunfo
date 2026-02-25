#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

  // Área para definição das variáveis para armazenar as propriedades das cidades  
char estado1;
char codigo_carta1[3];
char nome_cidade1[20];
int populacao1;
float area1;
float PIB1;
int n_ponto_turistico1;

char estado2;
char codigo_carta2[3];
char nome_cidade2[20];
int populacao2;
float area2;
float PIB2;
int n_ponto_turistico2;

  // Área para entrada de dados
   /****************Input Carta 1****************/
    /*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char*/
    printf ("Carta 1 \n");
    printf ("Digite o estado(Uma letra de 'A' a 'H'): \n"); 
    scanf("%c", &estado1); 

    /*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/
    printf ("Digite o codigo da carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n"); 
    scanf(" %s", &codigo_carta1);

    /*Nome da Cidade: O nome da cidade. Tipo: char[] (string)*/
    printf ("Digite o nome da cidade: \n"); 
    scanf(" %s", &nome_cidade1);

    /*População: O número de habitantes da cidade. Tipo: int*/
    printf ("Digite o número de habitantes da cidade: \n"); 
    scanf(" %d", &populacao1);

    /*Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float*/
    printf ("Digite a área da cidade em km²: \n"); 
    scanf("%f", &area1);

    /*PIB: O Produto Interno Bruto da cidade. Tipo: float*/
    printf ("Digite PIB interno Bruto da cidade: \n"); 
    scanf("%f", &PIB1);

    /*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/
    printf ("Digite a quantidade de pontos turísticos da cidade: \n"); 
    scanf("%d", &n_ponto_turistico1);

        /****************Input Carta 2****************/
    /*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char*/
    printf ("\nCarta 2 \n");
    printf ("Digite o estado(Uma letra de 'A' a 'H'): \n"); 
    scanf(" %c", &estado2); 

    /*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/
    printf ("Digite o codigo da carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n"); 
    scanf(" %s", &codigo_carta2);

    /*Nome da Cidade: O nome da cidade. Tipo: char[] (string)*/
    printf ("Digite o nome da cidade: \n"); 
    scanf(" %s", &nome_cidade2);

    /*População: O número de habitantes da cidade. Tipo: int*/
    printf ("Digite o número de habitantes da cidade: \n"); 
    scanf(" %d", &populacao2);

    /*Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float*/
    printf ("Digite a área da cidade em km²: \n"); 
    scanf("%f", &area2);

    /*PIB: O Produto Interno Bruto da cidade. Tipo: float*/
    printf ("Digite PIB interno Bruto da cidade: \n"); 
    scanf("%f", &PIB2);

    /*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/
    printf ("Digite a quantidade de pontos turísticos da cidade: \n"); 
    scanf("%d", &n_ponto_turistico2);


  // Área para exibição dos dados da cidade
   /****************Output Carta 1****************/
    printf("Carta1:\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo_carta1);
    printf("Nome da Cidade : %s\n", nome_cidade1);
    printf("População : %d\n", populacao1);
    printf("Área (em km²): : %f km²\n" , area1);
    printf("PIB : %f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos : %d\n\n\n", n_ponto_turistico1);


    /****************Output Carta 1****************/
    printf("Carta2:\n");
    printf("Estado : %c\n", estado2);
    printf("Código : %s\n", codigo_carta2);
    printf("Nome da Cidade : %s\n", nome_cidade2);
    printf("População : %d\n", populacao2);
    printf("Área (em km²): : %f km²\n", area2);
    printf("PIB : %f bilhões de reais\n", PIB2);
    printf("Número de Pontos Turísticos : %d\n", n_ponto_turistico2);
    
return 0;
} 
