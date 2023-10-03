#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    int x, y;

    char **alunos;
    float *notas;

    alunos = malloc(3 * sizeof(char *));

    for (x = 0; x <= 2; x++)
    {
        alunos[x] = malloc(10 * sizeof(char));
    }

    notas = malloc(3 * sizeof(float));

    for (x = 0; x <= 2; x++)
    {
        printf("Digite o nome e nota do aluno: ");
        scanf("%s%f", &alunos[x][0], &notas[x]);
    }

    printf("\nNome\t\t\tNota\n");

    for (int x = 0; x <= 2; x++)
    {
        printf("Nome: %s\t\t\t%.2f\n", alunos[x], notas[x]);
    }
}