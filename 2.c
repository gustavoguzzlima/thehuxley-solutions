/**
 * (c) 2019 @gustavoguzzlima <gdjl@ic.ufal.br>. Problem 2, The Huxley.
*/

#include <stdio.h>

int main()
{
    int a, b, c, tmp, i, j;

    //input
    scanf("%d%d%d", &a, &b, &c);

    // assuming it's already sorted...

    if (a > b || a > c || b > c)
    {
        if (a > b)
        {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (a > c)
        {
            tmp = c;
            c = a;
            a = tmp;
        }

        if (b > c)
        {
            tmp = b;
            b = c;
            c = tmp;
        }
    }

    // output
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}