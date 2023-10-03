#include <stdio.h>
#include <stdlib.h>

typedef struct no
{
    char caractere;
    struct no *proximo;
} No;

No *empilhar(No *pilha, char carac);

No *desempilhar(No **pilha);

void imprimir(No *pilha);

No *empilhar(No *pilha, char carac)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->caractere = carac;
        novo->proximo = pilha;
        return novo;
    }
    else
    {
        printf("\nErro ao alocar memoria");
    }
    return NULL;
}

No *desempilhar(No **pilha)
{
    No *remover = NULL;

    if (*pilha)
    {
        remover = *pilha;
        *pilha = remover->proximo;
    }
    else
    {
        printf("\nPilha vazia.\n");
    }
    return remover;
}

void imprimir(No *pilha)
{
    while (pilha)
    {
        printf("%d\n", pilha->caractere);
        pilha = pilha->proximo;
    }
    printf("\n");
}

int forma_par(char f, char d)
{
    switch (f)
    {
    case ')':
        if ((d == '('))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;

    case ']':
        if ((d == '['))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;

    case '}':
        if ((d == '{'))
        {
            return 1;
        }
        else
        {
            return 0;
        }
        break;
    }
}

int identifica_formacao(char x[])
{
    int i = 0;
    No *remover, *pilha = NULL;

    while (x[i] != '\0')
    {
        if (x[i] == '[' || x[i] == '(' || x[i] == '{')
        {
            pilha = empilhar(pilha, x[i]);
            imprimir(pilha);
        }
        else if (x[i] == ']' || x[i] == ')' || x[i] == '}')
        {
            remover = desempilhar(&pilha);
            if (forma_par(x[i], remover->caractere) == 0)
            {
                printf("\nExpressao mal formada.\n");
                return 1;
            }
            free(remover);
        }
        i++;
    }
    imprimir(pilha);

    if (pilha)
    {
        printf("\nExpressao mal formada.\n");
        return 1;
    }
    else
    {
        printf("\nExpressao bem formada.\n");
        return 0;
    }
}

int main(void){
    char exp[100];

    printf("\nDigite uma expressao: ");
    scanf("%99[^\n]",exp);
    printf("\nExpressao: %s\nRetorno: %d\n", exp, identifica_formacao(exp));
}