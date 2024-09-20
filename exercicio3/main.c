#include <stdio.h>
#include <stdlib.h>
int main(){
    int idade, ano_nascimento, ano_atual;
    printf("Digite o ano que voce nasceu:\n");
    scanf("%d", &ano_nascimento);
    printf("Digite o ano atual:\n");
    scanf("%d", &ano_atual);
    idade = ano_atual - ano_nascimento;
    printf("Sua idade e: %d\n",idade);
    return 0;


}