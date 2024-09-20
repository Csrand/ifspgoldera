#include <stdio.h>
#include<stdlib.h>
int main(){
   float salario, valor_da_hora, salario_total;
    int banco_de_horas;
    printf("Calculadora de banco de horas!\n");
    printf("Informe seu salario:\n");
    scanf("%f", &salario);
    printf("Informe quantas horas tem no seu banco de horas:\n");
    scanf("%d", & banco_de_horas);

        valor_da_hora =  salario / banco_de_horas;
        salario_total = banco_de_horas * valor_da_hora;
    printf("Voce vai receber: %.2f\n", salario_total);
    return 0;
}