#include <stdio.h>

    ////processos de calculoos ////
    //calculo da densidade

    //A função de densidade é População / Área em km2

   float calc_densidade_pop (int populacao, float area){
    if(area <= 0){
        return 0;
        }
        return populacao / area;
    }

    //A função de PIB Percapta é PIB / População
    //calculo da PIB percapta
   float calc_pib_percapata (float pib, int populacao){
    if(populacao <= 0){
        return 0;
        }
        return pib / populacao;
    }


int main(){
    //Cadastro de cartas
    // CARTA 1
    char estado1,  codigo1[4], cidade1[50];
    int populacao1, pontos_turisticos1;
    float area1, pib1;
    

    // CARTA 2
    char estado2, codigo2[4], cidade2[50];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

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
    printf("\nCarta 1: %s\n", cidade1);
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade populacional: %.2f hab/km2\n", calc_densidade_pop(populacao1,area1)); ////Aqui com base nos valores informados em população e área, o resultado já imprime a densidade de população
    printf("PIB percapta: %.2f \n", calc_pib_percapata(pib1,populacao1));  ////Aqui com base nos valores informados em PIB e população, o resultado já imprime o PIB Percapta

    printf("\n===== CARTA 2 =====\n");
    printf("\nCarta 2: %s\n", cidade2);
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km2\n", calc_densidade_pop(populacao2,area2));
    printf("PIB percapta: %.2f \n", calc_pib_percapata(pib2,populacao2));


    return 0;
}

