#include <stdio.h>
#include <stdlib.h>
#include "pilha2v3.h"

No* empilhar(No *pilha, int num){
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->valor = num;
        novo->proximo = pilha;
        return novo;
    } else
    {
        printf("\nErro ao alocar memoria");
    }
    return NULL;
}

No* desempilhar(No **pilha){
    No *remover = NULL;

    if (*pilha)
    {
        remover = *pilha;
        *pilha = remover->proximo;
    } else
    {
        printf("\nPilha vazia.\n");
    }
    return remover;  
}

void imprimir(No *pilha){
    while (pilha)
    {
        printf("%d\n", pilha->valor);
        pilha = pilha->proximo;
    }
    printf("\n");
}