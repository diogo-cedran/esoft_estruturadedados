#include <stdio.h>

int main(void)
{
    int a = 100, *b, **c;
    b = &a;
    c = &b;

    printf("Endereco de A: %p\tConteudo de A: %d\n", &a, a);
    printf("Endereco de B: %p\tConteudo de B: %d\n", &b, b);
    printf("Conteudo apontado por B: %d\n", *b);
    printf("Endereco de C: %p\tConteudo de C: %d\n", &c, c);
    printf("Conteudo apontado por C: %d\n", **c);
}