#include <stdio.h>

int main(void)
{
    int *p, num = 10;
    // p = 10
    p = &num;

    printf("Valor apontado por p: %p %p", *p, num);
}