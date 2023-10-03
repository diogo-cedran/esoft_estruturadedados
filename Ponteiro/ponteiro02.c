#include <stdio.h>

int main(void)
{
    char *p, letra = 'e';

    p = &letra;

    printf("valor apontado por p: %c %c %p %p", *p, letra, p, &letra);
}