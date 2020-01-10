/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    double a, b, c;

    scanf("%lf %lf %lf", &a, &b, &c);

    double average = (a+b+c)/3;

    if (average >= 7) printf("aprovado\n");
    else if (average < 3) printf("reprovado\n");
    else printf("prova final\n");

    return 0;
}