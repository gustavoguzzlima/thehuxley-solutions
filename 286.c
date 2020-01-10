/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if (a == b && (c != b && c != a)) printf("C\n");
    else if (a == c && (b != a && b != c)) printf("B\n");
    else if (b == c && (a != b && a != c)) printf("A\n");
    else printf("*\n");

    return 0;
}