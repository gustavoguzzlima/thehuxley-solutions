/* 
    (c) 2019 @gustavoguzzlima <gdjl@ic.ufal.br>. Problem 396, The Huxley.
*/

#include <stdio.h>

int main() 
{
    int taxed_homes = 0;
    float tax_sum = 0;

    // input
    int input = 0;

    while (1)
    {
        scanf("%d", &input);
        if (input == 999) break;

        if (input > 2)
        {
            tax_sum += ((12.89) * (float)(input-2));
            taxed_homes += 1;
        }
    }

    // output
    printf("%.2f\n%d\n", tax_sum, taxed_homes);
  
    return 0;
}