/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int a, b, c, tmp;

    scanf("%d %d %d", &a, &b, &c);

    if (a < b || a < c || b < c)
    {

        if (a < b)
        {
            tmp = a;
            a = b;
            b = tmp;            
        }

        if (a < c)
        {
            tmp = a;
            a = c;
            c = tmp;
        }

        if (b < c)
        {
            tmp = b;
            b = c;
            c = tmp;
        }
    }

    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}