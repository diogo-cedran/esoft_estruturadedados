#include <stdio.h>

typedef struct
{
    int dia, mes, ano;
} Data;

void imprimirData(Data *x)
{
    printf("%d/%d/%d\n", x->dia, x->mes, x->ano);
}

int main(void)
{

    Data data;
    Data *p;
 
    p = &data;

    printf("Endereco de data: %p\tConteudo de p: %p\n", &data, p);
    data.dia = 7;
    data.mes = 2;
    data.ano = 2023;

    imprimirData(p);
    printf("%d/%d/%d\n", data.dia, data.mes, data.ano);
}