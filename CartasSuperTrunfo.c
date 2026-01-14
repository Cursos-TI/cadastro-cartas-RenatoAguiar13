#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
    char estado1, estado2, cod_carta1[3], cod_carta2[3], nome_cidade1[20], nome_cidade2[20];
    int populacao1, populacao2,area1, area2, ponto_turisticos1, ponto_turisticos2;
    float pib1, pib2;

  // Área para entrada de dados

   //Carta1 
      
    // estado  
    printf("\nDigite o Estado da primeira carta (escolha uma letra entre A e H):\n");  
    scanf("%c", &estado1);  
    // cod_carta  
    printf("\nDigite o codigo da primeira carta:\n");  
    scanf("%s", &cod_carta1);  
    // cidade
    printf("\nDigite o nome da cidade da primeira carta:\n");  
    scanf("%s", &nome_cidade1);  
    // população 
    printf("\nDigite a população da cidade da primeira carta:\n");  
    scanf("%d", &populacao1);  
    // área  
    printf("\nDigite a área da cidade da primeira carta:\n");  
    scanf("%f", &area1);  
    // pib  
    printf("\nDigite o PIB da cidade da primeira carta:\n");  
    scanf("%f", &pib1);  
    // pontos turisticos  
    printf("\nDigite a quantidade de pontos turisticos que existem na cidade da primeira carta:\n");  
    scanf("%d", &ponto_turisticos1);  
  
  //Carta2 

    // estado  
    printf("\nDigite o Estado da segunda carta (escolha uma letra entre A e H):\n");  
    scanf("%c", &estado2);  
    // cod_carta  
    printf("\nDigite o codigo da carta da segunda carta:\n");  
    scanf("%s", &cod_carta2);  
    // cidade
    printf("\nDigite o nome da cidade da segunda carta:\n");  
    scanf("%s", &nome_cidade2);  
    // população 
    printf("\nDigite a população da cidade da segunda carta:\n");  
    scanf("%d", &populacao2);  
    // área  
    printf("\nDigite a área da cidade da segunda carta:\n");  
    scanf("%f", &area2);  
    // pib  
    printf("\nDigite o PIB da cidade da segunda carta:\n");  
    scanf("%f", &pib2);  
    // pontos turisticos  
    printf("\nDigite a quantidade de pontos turisticos que existem na cidade da segunda carta:\n");  
    scanf("%d", &ponto_turisticos2);  

  // Área para exibição dos dados da cidade 
  
    printf("Carta 1: \n");  
    printf("\nEstado: %c\n", estado1);  
    printf("Codigo: %s\n", cod_carta1);  
    printf("Nome da cidade: %s\n", nome_cidade1);  
    printf("População: %d\n", populacao1);  
    printf("Área: %f\n", area1);  
    printf("PIB: %f\n", pib1);  
    printf("Número de pontos Turísticos: %d\n", ponto_turisticos1);  

  
    printf("\nCarta 2: \n");  
    printf("\nEstado: %c\n", estado2);  
    printf("Codigo: %s\n", cod_carta2);  
    printf("Nome da cidade: %s\n", nome_cidade2);  
    printf("População: %d\n", populacao2);  
    printf("Área: %f\n", area2);  
    printf("PIB: %f\n", pib2);  
    printf("Número de pontos Turísticos: %d\n", ponto_turisticos2);  
      
   
    
return 0;
} 
