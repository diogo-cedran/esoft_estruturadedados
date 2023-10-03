#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *x;

    x = calloc(1, sizeof(char));

    if (x)
    {
        printf("Memoria alocada com sucesso.\n");
        printf("x: %c\n", *x);
        *x = 'E';
        printf("x: %c\n", *x);
    }
    else
    {
        printf("Erro ao alocar memoria.\n");
    }
}