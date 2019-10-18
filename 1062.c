#include <stdio.h>

int main()
{
    float s;
    scanf("%f", &s);

    if (s < 7) printf("Acida\n");
    else if (s > 7) printf("Basica\n");
    else printf("Neutra\n");

    return 0;
}