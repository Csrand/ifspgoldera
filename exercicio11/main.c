#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, quadrado, cubo;
    printf("*****************************\n");
    printf("******** CALCULADORA ********\n");
    printf("************ DE *************\n");
    printf("********* QUADRADO **********\n");
    printf("************ E **************\n");
    printf("********** CUBO ************\n");
    printf("*****************************\n");

    printf("Digite um numero:\n");
    scanf("%d", & num);
            quadrado = num * num;
            cubo = num * num * num;
    printf("O seu numero elevado ao quadrado e:\n %d\n", quadrado);
    printf("O seu numero elevado ao cubo e:\n %d", cubo);

    return 0;
    }
