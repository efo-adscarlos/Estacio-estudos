#include <stdio.h>

int main(){
    //Cadastro de cartas
    // CARTA 1
    char estado1;
    char codigo1[4];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;

    // CARTA 2
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;

    //interação com o usuario: vai aparecendo no console as 
    //informações sequenciadas para cadastro das cartas
    
    printf("Cadastro da carta 1\n");

    printf("Estado (A-H): ");
    scanf(" %c", &estado1);

    printf("Codigo (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area (km2): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    printf("\nCadastro da carta 2\n");

    //O & é usado para impressão de numeros inteiros e decimais
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);

    //O %3s é para limitar o campo a reconhecer apenas 3 campos da string
    printf("Codigo (ex: B02): ");
    scanf("%3s", codigo2);

    /*o %49[^\n] vai servir para leitura do preenchimento com espaços "Rio de Janeiro"
    Sem ele o campo faria a leitura somente "Rio" e o limite é 49 caracteres*/
    printf("Nome da cidade: ");
    scanf(" %49[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area (km2): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    //no final do cadastro da segunda carta ele imprime as cartas cadastradas
    printf("\n===== CARTAS CADASTRADAS =====\n");
    printf("\n===== CARTA 1 =====\n");
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);

    printf("\n===== CARTA 2 =====\n");
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}
