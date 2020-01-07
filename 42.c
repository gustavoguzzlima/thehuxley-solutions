/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>

int main()
{
    int age;

    scanf("%d", &age);

    if (age < 16)
    {
        printf("nao eleitor\n");
    }
    else if ((age >= 16 && age < 18) || age > 65) 
    {
        printf("eleitor facultativo\n");
    }
    else 
    {
        printf("eleitor obrigatorio\n");
    }

    return 0;
}