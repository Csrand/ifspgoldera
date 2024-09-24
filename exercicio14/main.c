#include<stdio.h>
#include<stdlib.h>
int main()
{
    float temperatura,faren;
    printf("Conversor de Graus Celcius para Farenheit:\n");
    printf("Informe a temperatura:\n");
    scanf("%f", & temperatura);
     faren = (temperatura * 9 / 5)+32;
    printf("%.2f graus Celsius equivale a %.2f graus Fahrenheit.\n", temperatura, faren);
    return 0;
    }
