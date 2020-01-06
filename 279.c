/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int number, per_hour;
    double hours_worked;

    scanf("%d %d %lf", &number, &per_hour, &hours_worked);
    printf("NUMBER = %d\nSALARY = R$ %.2lf\n", number, per_hour * hours_worked);

    return 0;
}