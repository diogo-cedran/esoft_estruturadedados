#include <stdio.h>

void imprimir(int *num){
    printf("%d\n", *num);
    *num = 80;
}

int main(void){
    int idade = 35;
    imprimir(&idade);  
    printf("Nova idade: %d\n", idade);
}