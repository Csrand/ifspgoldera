#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int num1, r1, r2,r3,r4,r5,r6,r7,r8,r9,r10;
int main()
{
    setlocale(LC_ALL,"Portuguese");
    
    printf("***CALCULADORA DE TABUADA**********\n");
    printf("Digite um numero:\n");
    scanf("%d", & num1);

    r1 = num1 * 1;
    r2 = num1 * 2;
    r3 = num1 * 3;
    r4 = num1 * 4;
    r5 = num1 * 5;
    r6 = num1 * 6;
    r7 = num1 * 7;
    r8 = num1 * 8;
    r9 = num1 * 9;
    r10 = num1 * 10;

    
    printf("A tabuada de %d e:\n",num1);
    printf("%d X 1 = %d\n", num1, r1 );
    printf("%d X 2 = %d\n", num1, r2 );
    printf("%d X 3 = %d\n", num1, r3 );
    printf("%d X 4 = %d\n", num1, r4 );
    printf("%d X 5 = %d\n", num1, r5 );
    printf("%d X 6 = %d\n", num1, r6 );
    printf("%d X 7 = %d\n", num1, r7 );
    printf("%d X 8 = %d\n", num1, r8 );
    printf("%d X 9 = %d\n", num1, r9 );
    printf("%d X 10 = %d\n", num1, r10 );

    return 0;
}