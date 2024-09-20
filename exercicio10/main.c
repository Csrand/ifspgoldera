#include<stdio.h>
#include<stdlib.h>
int main()
{
    float raio, area;
    printf("*****************************\n");
    printf("******** CALCULADORA ********\n");
    printf("************ DE *************\n");
    printf("**** AREA DO CIRCULO ********\n");
    printf("*****************************\n");

    printf("Digite o valo do raio:\n");
    scanf("%f", & raio);
     area = 3.14 * (raio * raio);
    printf("Area Do Circulo:\n %.2f", area);
    return 0;
    }