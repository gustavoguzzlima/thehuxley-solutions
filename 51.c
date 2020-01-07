/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    float product_value[] = {5.30, 6.00, 3.20, 2.50}, final_cost;
    int product_code, qty;
    
    scanf("%d %d", &product_code, &qty);
    final_cost = product_value[product_code-1] * qty;

    if (final_cost >= 40.00 || qty >= 15)
    {
        final_cost *= 0.85;
    }

    printf("R$ %.2f\n", final_cost);

    return 0;
}