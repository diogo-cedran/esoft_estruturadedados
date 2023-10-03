#include <stdio.h>

int main (void){
    char texto[100];

    scanf("%100[^\n]", texto);
    printf("%s\n", texto);

    printf("%p\n", texto);
    printf("%p\n", &texto);
    printf("%p\n", &texto[0]);
}