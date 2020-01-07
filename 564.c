/**
 * 2020 @gustavoguzzlima <gdjl@ic.ufal.br>
*/

#include <stdio.h>
#include <math.h>

int main()
{
    double max_speed, current_driver_speed, penalty = 0.00;

    scanf("%lf %lf", &max_speed, &current_driver_speed);

    int points_lost = 0;

    if (current_driver_speed > max_speed && fabs(current_driver_speed - max_speed * 1.2) <= 0.00001)
    {
        penalty += 85.13;
        points_lost += 4;
    }
    else if (current_driver_speed > max_speed * 1.2 && current_driver_speed <= max_speed * 1.5)
    {
        penalty += 127.69;
        points_lost += 5;
    }
    else if (current_driver_speed > max_speed * 1.5)
    {
        penalty += 574.62;
        points_lost += 7;
    }

    printf("%.2lf\n%d\n", penalty, points_lost);

    return 0;
}