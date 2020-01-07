/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int consumption, i, tmp;

    scanf("%d", &consumption);
    tmp = consumption;

    consumption = 7;

    if (tmp > 10) 
    {
        for (i = 1; i <= tmp; i++)
        {
            if (i >= 11 && i <= 30) consumption += 1;
            else if (i >= 31 && i <= 100) consumption += 2;
            else if (i >= 101) consumption += 5;
        }
    }

    printf("%d\n", consumption);

    return 0;
}