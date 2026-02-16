#include <stdio.h>

int main(){
    //Criação das variaveis para receber os dados das cartas
    //PARA CADASTRO DA 1 CARTA//
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    //PARA CADASTRO DA 2 CARTA//
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //Cadastro de cartas do Super Trunfo
    //Carta 1
    printf("Cadastro da carta 1\n") ;

    printf("Estado (A-H): ");
    scanf(" %s", estado1); 
    
    printf("Código da carta (ex: A01, B02): ");
    scanf(" %s", &codigo1);

    printf("Nome da cidade: ");
    scanf(" %s", &cidade1);

    printf("População: ");
    scanf(" %i", &populacao1);

    printf("Área (km2): ");
    scanf(" %f", &area1);
    
    printf("Pontos turisticos: ");
    scanf(" %i", &pontos_turisticos1);
        
    //Carta 2
    printf("Cadastro da carta 2\n");

    printf("Estado (A-H): ");
    scanf(" %s", estado2); 
    
    printf("Código da carta (ex: A01, B02) ");
    scanf(" %s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %s", cidade2);

    printf("População ");
    scanf(" %i", &populacao2);

    printf("Área (km2): ");
    scanf(" %f", &area2);
    
    printf("Pontos turisticos: ");
    scanf(" %i", &pontos_turisticos2);    

    ////Para mostrar as cartas cadastradas
    
    printf("\n\n===== CARTAS CADASTRADAS =====\n");

    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %i\n", pontos_turisticos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %i\n", pontos_turisticos2);


    return 0;
}