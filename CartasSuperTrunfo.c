#include <stdio.h>

int main(){

char estado1;
char codigo_carta1[3];
char nome_cidade1[20];
unsigned long int populacao1;
float area1;
float PIB1;
int n_ponto_turistico1;
float densidade_populacional1;
float PIB_per_capita1;
int Superpoder1;

char estado2;
char codigo_carta2[3];
char nome_cidade2[20];
unsigned long int populacao2;
float area2;
float PIB2;
int n_ponto_turistico2;
float densidade_populacional2;
float PIB_per_capita2;
int Superpoder2;

int resultadoPopulacao1;
int resultadoArea1;
int resultadoPIB1;
int resultado_n_pontos_turistico1;
int resultado_densidade1;
int resultadoPIB_per_capita1;
int resultadoSuperpoder1;

int resultadoPopulacao2;
int resultadoArea2;
int resultadoPIB2;
int resultado_n_pontos_turistico2;
int resultado_densidade2;
int resultadoPIB_per_capita2;
int resultadoSuperpoder2;

    /****************Input Carta 1****************/
    /*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char*/
    printf ("Carta 1 \n");
    printf ("Digite o estado(Uma letra de 'A' a 'H'): \n"); 
    scanf("%c", &estado1); 

    /*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/
    printf ("Digite o codigo da carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n"); 
    scanf(" %s", codigo_carta1);

    /*Nome da Cidade: O nome da cidade. Tipo: char[] (string)*/
    printf ("Digite o nome da cidade: \n"); 
    scanf(" %s", nome_cidade1);

    /*População: O número de habitantes da cidade. Tipo: int*/
    printf ("Digite o número de habitantes da cidade: \n"); 
    scanf(" %lu", &populacao1);

    /*Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float*/
    printf ("Digite a área da cidade em km²: \n"); 
    scanf(" %f", &area1);

    /*PIB: O Produto Interno Bruto da cidade. Tipo: float*/
    printf ("Digite PIB interno Bruto da cidade: \n"); 
    scanf(" %f", &PIB1);

    /*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/
    printf ("Digite a quantidade de pontos turísticos da cidade: \n"); 
    scanf(" %d", &n_ponto_turistico1);

    /****************Calculo Carta 1****************/
    /*Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.*/
    densidade_populacional1=(float)populacao1/area1;

    /*Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.*/
    PIB_per_capita1=(float)PIB1/populacao1;

        /****************Input Carta 2****************/
    /*Estado: Uma letra de 'A' a 'H' (representando um dos oito estados). Tipo: char*/
    printf ("\nCarta 2 \n");
    printf ("Digite o estado(Uma letra de 'A' a 'H'): \n"); 
    scanf(" %c", &estado2); 

    /*Código da Carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03). Tipo: char[] (um array de caracteres, ou string)*/
    printf ("Digite o codigo da carta: A letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): \n"); 
    scanf(" %s", codigo_carta2);

    /*Nome da Cidade: O nome da cidade. Tipo: char[] (string)*/
    printf ("Digite o nome da cidade: \n"); 
    scanf(" %s", nome_cidade2);

    /*População: O número de habitantes da cidade. Tipo: int*/
    printf ("Digite o número de habitantes da cidade: \n"); 
    scanf(" %lu", &populacao2);

    /*Área (em km²): A área da cidade em quilômetros quadrados. Tipo: float*/
    printf ("Digite a área da cidade em km²: \n"); 
    scanf(" %f", &area2);

    /*PIB: O Produto Interno Bruto da cidade. Tipo: float*/
    printf ("Digite PIB interno Bruto da cidade: \n"); 
    scanf(" %f", &PIB2);

    /*Número de Pontos Turísticos: A quantidade de pontos turísticos na cidade. Tipo: int*/
    printf ("Digite a quantidade de pontos turísticos da cidade: \n"); 
    scanf(" %d", &n_ponto_turistico2);

    /****************Calculo Carta 2****************/
    /*Calcular a Densidade Populacional: Divida a população da cidade pela sua área. O resultado será a densidade populacional, que representa o número de habitantes por quilômetro quadrado. Armazene esse valor em uma variável do tipo float.*/
    densidade_populacional2=(float)populacao2/area2;

    /*Calcular o PIB per Capita: Divida o PIB da cidade pela sua população. O resultado será o PIB per capita, que indica a riqueza média por pessoa na cidade. Armazene esse valor em uma variável do tipo float.*/
    PIB_per_capita2=(float)PIB2/populacao2;

    /****************Comparações carta 1****************/
    resultadoPopulacao1= populacao1>populacao2;
    resultadoArea1= area1>area2;
    resultadoPIB1=PIB1>PIB2;
    resultado_n_pontos_turistico1=n_ponto_turistico1>n_ponto_turistico2;
    resultado_densidade1=densidade_populacional1<densidade_populacional2;
    resultadoPIB_per_capita1=PIB_per_capita1>PIB_per_capita2;

    /****************Comparações carta 2****************/
    resultadoPopulacao2= populacao2>populacao1;
    resultadoArea2= area2>area1;
    resultadoPIB2=PIB2>PIB1;
    resultado_n_pontos_turistico2=n_ponto_turistico2>n_ponto_turistico1;
    resultado_densidade2=densidade_populacional2<densidade_populacional1;
    resultadoPIB_per_capita2=PIB_per_capita2>PIB_per_capita1;
   
    /****************Calcula superpoder****************/
    Superpoder1=resultadoPopulacao1+resultadoArea1+resultadoPIB1+resultado_n_pontos_turistico1+resultado_densidade1+resultadoPIB_per_capita1;
    Superpoder2=resultadoPopulacao2+resultadoArea2+resultadoPIB2+resultado_n_pontos_turistico2+resultado_densidade2+resultadoPIB_per_capita2;

    /****************Super poder carta 1****************/
    resultadoSuperpoder1=Superpoder1>Superpoder2;

    /****************Super poder carta 2****************/

    resultadoSuperpoder2=Superpoder2>Superpoder1;



    /****************Output Carta 1****************/
    printf("Carta1\n");
    printf("Estado : %c\n", estado1);
    printf("Código : %s\n", codigo_carta1);
    printf("Nome da Cidade : %s\n", nome_cidade1);
    printf("População : %lu, a carta 1 venceu %d\n", populacao1, resultadoPopulacao1);
    printf("Área (em km²):%.2f km², a carta 1 venceu %d\n" , area1, resultadoArea1);
    printf("PIB : %.2f bilhões de reais, a carta 1 venceu %d\n", PIB1,resultadoPIB1);
    printf("Número de Pontos Turísticos : %d, a carta 1 venceu %d\n", n_ponto_turistico1, resultado_n_pontos_turistico1);
    printf("Densidade Populacional: %.2f hab/km², a carta 1 venceu %d\n", densidade_populacional1, resultado_densidade1);
    printf("PIB per Capita: %.2f reais, a carta 1 venceu %d\n", PIB_per_capita1, resultadoPIB_per_capita1);
    printf("Super Poder: %d, a carta 1 venceu %d\n\n\n", Superpoder1, resultadoSuperpoder1);


    /****************Output Carta 2****************/
    printf("Carta2\n");
    printf("Estado : %c\n", estado2);
    printf("Código : %s\n", codigo_carta2);
    printf("Nome da Cidade : %s\n", nome_cidade2);
    printf("População : %lu, a carta 2 venceu %d\n", populacao2, resultadoPopulacao2);
    printf("Área (em km²): : %.2f km², a carta 2 venceu %d\n", area2, resultadoArea2);
    printf("PIB : %.2f bilhões de reais, a carta 2 venceu %d\n", PIB2, resultadoPIB2);
    printf("Número de Pontos Turísticos : %d, a carta 2 venceu %d\n", n_ponto_turistico2, resultado_n_pontos_turistico2);
    printf("Densidade Populacional: %.2f hab/km², a carta 2 vnceu %d\n", densidade_populacional2, resultado_densidade2);
    printf("PIB per Capita: %.2f reais, a carta 2 venceu %d\n", PIB_per_capita2, resultadoPIB_per_capita2);
    printf("Super Poder: %d, a carta 2 venceu %d\n\n\n", Superpoder2, resultadoSuperpoder2);

    return 0;


}