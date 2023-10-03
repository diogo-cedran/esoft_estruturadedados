#include <stdio.h>
#include <stdlib.h>

int main(void){
    char nomes[3][10];
    float notas[3];
    int i;

    for (i = 0; i < 3; i++)
    {
        printf("Digite o nome e a nota do estudante: ");
        scanf("%s%f", &nomes[i], &notas[i]);
    }
    
    printf("\nNome\t\tNota\n");

    for (i = 0; i < 3; i++);
    {
        printf("%s\t\t%.2f\n", nomes[i], notas[i]);
    }
    
}