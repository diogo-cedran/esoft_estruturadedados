#include <stdio.h>
#include <stdlib.h>

int main(void){
    int i, *vet1, *vet2;

    vet1 = malloc(10 * sizeof(int));
    vet2 = calloc(10, sizeof(int));

    printf(("\nCom malloc: "));
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet1[i] );
    }
    
    printf(("\nCom calloc: "));
    for (i = 0; i < 10; i++)
    {
        printf("%d ", vet2[i]);
    }
    
}