/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    double salary;
    
    scanf("%lf", &salary);

    if (salary > 500) salary *= 1.1;
    else if (salary > 300 && salary <= 500) salary *= 1.07;
    else salary *= 1.05;

    printf("%.2lf\n", salary);

    return 0;
}