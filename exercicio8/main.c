#include <stdio.h>
#include<stdlib.h>
int main(){
    float deposito, taxa, rendimento, total;
    printf("Calcule seu rendimento!\n");
    printf("Informe o valor do Deposito:\n");
    scanf("%f", &deposito);
    printf("Informe a taxa de juros:\n");
    scanf("%f", & taxa);
        rendimento = deposito * (taxa / 100);
        total = deposito + rendimento;
    printf("Seu rendimento foi de: %.2f reais\n", rendimento);
    printf("E o valor total agora e de: %.2f reais\n", total);

    return 0;
}