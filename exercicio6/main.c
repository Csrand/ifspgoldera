#include <stdio.h>
#include<stdlib.h>
int main(){
    int salario, aumento;
    printf("Voce ganhou um aumento de 25%% !!!\n");
    printf("Informe seu salario:\n");
    scanf("%d", &salario);
    aumento = ( salario / 4 ) + salario;
    printf("Seu novo salario e: %d\n", aumento);
    return 0;
}