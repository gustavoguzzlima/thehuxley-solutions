/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    double pi = 3.14159, radius;

    scanf("%lf", &radius);
    printf("Area = %.4lf\n", (pi * (radius * radius))/10000);

    return 0;
}