/*
    (c) 2019 @gustavoguzzlima <gdjl@ic.ufal.br>. Problem 938, The Huxley.
*/

#include <stdio.h>

int main()
{
    int i, count = 0;
    float num;

    // input
    for (i = 0; i < 5; i++)
    {
        printf("Digite um valor:\n");
        scanf("%f", &num);

        if (num < 0) count++;
    }

    // output
    printf("Foram digitados %d numeros negativos\n", count);

    return 0;
}