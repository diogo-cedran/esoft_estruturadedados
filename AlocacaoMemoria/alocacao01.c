#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *x;

    x = malloc(sizeof(int));

    if (x)
    {
        printf("Memoria alocada com sucesso.\n");
        printf("x: %d\n", *x);
        *x = 50;
        printf("x: %d\n", *x);
        printf("Endereco de x: %p\n", &x);
        printf("Conteudo de x: %p\n", x);
        printf("Tamanho de x: %d\n", sizeof(x));
        printf("Tamanho do endereco do conteudo de x: %d\n", sizeof(&(*x)));
    }
    else
    {
        printf("Erro ao alocar memoria.\n");
    }
}