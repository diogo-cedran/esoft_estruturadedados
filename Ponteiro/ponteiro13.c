#include <stdio.h>

int main(void)
{
    int a, *b, **c, ***d;

    printf("Digite um valor:");
    scanf("%d", &a);

    b = &a;
    c = &b;
    d = &c;

    printf("O dobro de %d eh: %d\n", a, 2 * *b);
    printf("O triplo de %d eh: %d\n", a, 3 * **c);
    printf("O quadruplo de %d eh: %d\n", a, 4 * ***d);
}