#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int **mat, i, j;
    mat = malloc(5 * sizeof(int));

    for (i = 0; i < 5; i++)
    {
        mat[i] = malloc(5 * sizeof(int));
    }

    srand(time(NULL));

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            *(*(mat + i) + j) = rand() % 100;
        }
    }

    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            printf("%2d ", *(*(mat + i) + j));
        }
        printf("\n");
    }
}