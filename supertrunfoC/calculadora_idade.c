///// CALCULADORA DE IDADE 

#include <stdio.h>

int main(){
    int ano;
    printf("Digite o ano de nasciemnto: \n");
    scanf("%d", &ano);
    
    int idade = 2026 - ano;
    
    printf("Sua idade é: %d\n",idade);

    return 0;

}
