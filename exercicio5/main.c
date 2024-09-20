#include <stdio.h>
#include<stdlib.h>
int main(){
    int nota1, nota2, nota3, peso1, peso2, peso3;
    float media;
    printf("Calcule sua media!\n");
    printf("informe a primeira nota:\n");
    scanf( "%d", &nota1);
    printf("informe o peso da nota:\n");
    scanf( "%d", &peso1);
    printf("informe a segunda nota:\n");
    scanf( "%d", &nota2);
    printf("informe o peso da nota:\n");
    scanf( "%d", &peso2);    
    printf("informe a terceira nota:\n");
    scanf( "%d", &nota3);
    printf("informe o peso da nota:\n");
    scanf( "%d", &peso3);
    media = (nota1 * peso1 + nota2 * peso2 + nota3 * peso3) / (float)(peso1 + peso2 + peso3);
    printf("Sua media e:\n %.2f", media);
    return 0;

}