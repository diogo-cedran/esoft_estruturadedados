#include <stdio.h>

int main(void)
{
    int i, vet[10] = {12, 13, 14, 15, 16, 22, 27, 30, 77, 80};

    for (i = 0; i < 10; i++)
    {
        printf("Endereco: %p\tConteudo: %d\n", vet + i, *(vet + i));
    }
}