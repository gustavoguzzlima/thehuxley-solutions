/*
    (c) 2019 @gustavoguzzlima <gdjl@ic.ufal.br>. Problem 868, The Huxley.
*/

#include <stdio.h>

int main()
{
    int N, D;
    scanf("%d %d", &N, &D);

    int array[N], i;
    for (i = 0; i < N; i++) scanf("%d", &array[i]);

    // bubblesort
    int j, tmp;
    for (i = 0; i < N; i++)
    {
        for (j = i+1; j < N; j++)
        {
            if (array[j] < array[i])
            {
                tmp = array[j];
                array[j] = array[i];
                array[i] = tmp;
            }
        }
    }

    int count = 0, result[5];

    // init result[] 
    for (i = 0; i < 5; i++) result[i] = -1;

    for (i = N-1, count = 1; i >= 0; i--)    
    {
        if ((array[i] % 10) == D)
        {
            result[5-count] = array[i];
            count++;
        }
    }

    //output
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", result[i]);
    }

    return 0;
}