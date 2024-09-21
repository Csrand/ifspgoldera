#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num; 
    printf("Calculador de Tabuada:\n");
    printf("Informe um numero:\n");
    scanf("%d", & num);
            for (int i = 1; i <= 10; i++)
            {
                int resultado = num *i;
                printf("%d  X  %d = %d\n", num, i, num * i );
            }
            
    
    return 0;
    }
