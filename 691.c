/**
 * (c) 2019 @gustavoguzzlima <gdjl@ic.ufal.br>. Problem 691, The Huxley.
*/

#include <stdio.h>

int main()
{
    int a, b, temp;

    scanf("%d %d", &a, &b);

    if (a < b) printf("%d %d\n", a, b);
    else printf("%d %d", b, a);

    return 0;
}