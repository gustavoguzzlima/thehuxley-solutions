/* 
    (c) 2019 @gustavoguzzlima <gdjl@ic.ufal.br>. Problem 2086, The Huxley.
*/
#include <stdio.h>

#define ARRAY_LEN 1000

int main()
{
    int array[ARRAY_LEN];
    int again = 0;
    int i;

    do 
    {
        // read array numbers
        for (i = 0; i < ARRAY_LEN; i++)
        {
            scanf("%d", &array[i]);
            if (array[i] == -1) return 0;
        }

        // look for
        int search;
        scanf("%d", &search);

        int count = 0;
        for (i = 0; i < ARRAY_LEN; i++)
        {
            if (array[i] == search) count++;
        }

        // print result
        printf("%d appeared %d times\n", search, count);
        count = 0;

    } while (again != -1);

    return 0;
}