#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b)
{
    float aux;
    aux = *a;
    *a = *b;
    *b = aux;
}

int main(void)
{
   float num1 = 50, num2 = 100;

   printf("Num1: %.2f\t\tNum2: %.2f\n", num1, num2);
   troca(&num1, &num2);
   printf("Num1: %.2f\t\tNum2: %.2f\n", num1, num2);
}