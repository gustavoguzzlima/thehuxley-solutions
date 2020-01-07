/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if      (a == b && b == c) printf("1\n");
    else if (a != b && b != c && c != a) printf("2\n");
    else if (a == b || a == c || b == c) printf("3\n");

    return 0;
}