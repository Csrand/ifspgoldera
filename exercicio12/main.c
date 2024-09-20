#include<stdio.h>
#include<stdlib.h>
int main()
{
    float custo_teatro, valor_do_ingresso, vendas_min;
    printf("Calcule quantos ingressos voce tem que vender:\n");
    printf("Informe o Custo do Local do Evento:\n");
        scanf("%f", & custo_teatro);
    printf("Informe o valor do ingresso:\n");
        scanf("%f", & valor_do_ingresso);
     vendas_min = custo_teatro / valor_do_ingresso;
    printf("E necessario vender no minimo %.2f ingressos\n", vendas_min);
    return 0;
    }