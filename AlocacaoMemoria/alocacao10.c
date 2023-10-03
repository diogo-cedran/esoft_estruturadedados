// Faça uma função para inverter uma string em linguagem C. ▪ Inverter a string no próprio vetor (sem fazer uma cópia) ou ▪ Copiar a string para um segundo vetor, invertendo a ordem enquanto se copia.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void inverter1(char vet[])
{
    int i, aux, fim, tam = strlen(vet);

    fim = tam - 1;

    for (i = 0; i < tam / 2; i++)
    {
        aux = vet[i];
        vet[i] = vet[fim];
        vet[fim] = aux;
        fim--;
    }
}

char *inverter2(char vet[])
{
    int i, aux, fim, tam = strlen(vet);
    char *novo = malloc((tam + 1) * sizeof(char));

    fim = tam - 1;

    for (i = 0; i < tam; i++)
    {
        novo[fim] = vet[i];
        fim--;
    }
    novo[i] = '\0';
    return novo;
}

int main(void)
{
    char texto[25] = {"Estrutura de Dados I"};
    char *p;

    printf("%s\n", texto);

    inverter1(texto);
    printf("%s\n", texto);

    p = inverter2(texto);
    printf("%s\n", texto);
}