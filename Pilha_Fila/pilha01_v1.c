#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int dia, mes, ano;
} Data;

typedef struct
{
    char nome[30]; // Nome do cliente
    Data data;
} Pessoa;

typedef struct no
{
    Pessoa p;
    struct no *proximo;
} No;

Pessoa ler_pessoa()
{
    Pessoa p;
    printf("\nNome: ");
    scanf("%29[^\n]", p.nome);
    printf("\nData de nascimento: ");
    scanf(" %d/%d/%d", &p.data.dia, &p.data.mes, &p.data.ano);
    return p;
}

void imprimir(Pessoa p)
{
    printf("\nNome: %s\nData: %2d/%2d/%4d", p.nome, p.data.dia, p.data.mes, p.data.ano);
}

No *empilhar(No *topo)
{
    No *novo = malloc(sizeof(No));

    if (novo)
    {
        novo->p = ler_pessoa();
        novo->proximo = topo;
        return novo;
    }
    else
    {
        printf("\nErro ao alocar memoria.\n");
    }
    return NULL;
}

No *desempilhar(No **topo)
{
    if (*topo != NULL)
    {
        No *remover = *topo;
        *topo = remover->proximo;
        return remover;
    }
    else
    {
        printf("\nPilha vazia!\n");
    }
    return NULL;
}

void imprimir_pilha(No *topo)
{
    while (topo)
    {
        imprimir(topo->p);
        topo = topo->proximo;
    }
}

int main(void)
{
    No *remover, *topo = NULL;
    int opcao;

    do
    {
        printf("\n0 - Sair\n1 - Empilhar\n2 - Desempilhar\n3 - Imprimir\n");
        scanf("%d", &opcao);
        getchar();

        switch (opcao)
        {
        case 1:
            topo = empilhar(topo);
            break;

        case 2:
            remover = desempilhar(&topo);
            if (remover)
            {
                printf("\nElemento removido.\n");
                imprimir(remover->p);
                free(remover);
            }
            else
            {
                printf("\nElemento nao existe.\n");
            }
            break;

        case 3:
            imprimir_pilha(topo);
            break;

        default:
            if (opcao != 0)
            {
                printf("\nOpcao invalida.\n");
            }
            break;
        }
    } while (opcao != 0);
}