#include <stdio.h>
#include <stdlib.h>

int strcpy(char *destino, char *origem)
{
    int i = 0;

    while (*(origem + i) != '\0')
    {
        *(destino + i) = *(origem + i);
        i++;
    }

    *(destino + i) = '\0';
    return i;
}

int main(void){
    char destino[30], origem[30] = {"Aula de Estrutura de Dados"};

    printf("Tamanho: %d\n", strcpy(destino, origem));
    printf("Destino: %s\n", destino);
}