/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int a, b, c, tmp;

    scanf("%d %d %d", &a, &b, &c);

    if (b < a || c < a)
    {
        tmp = a;
        a = b;
        b = tmp;

        if (c < a)
        {
            a = c;
            c = tmp;
        }
   }

    printf("%d\n", a);

    return 0;
}