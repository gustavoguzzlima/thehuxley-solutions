/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if (a < b) printf("%d %d\n", a, b);
    else printf("%d %d", b, a);

    return 0;
}