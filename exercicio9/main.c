#include <stdio.h>
#include <stdlib.h>

int main()
{
    float base, altura, area;
    printf("******************************\n");
    printf("**** CALCULADORA DE AREA *****\n");
    printf("******************************\n");
    printf("Digite o valo da base:\n");
    scanf("%f", & base);
    printf("Digite valor da altura:\n");
    scanf("%f", & altura);
     area = (base * altura)/2;
    printf("Area Do Retangulo: %.2f\n", area );
    return 0;}