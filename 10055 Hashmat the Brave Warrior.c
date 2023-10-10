#include <stdio.h>

int main()
{
    long int soldier, enemy, distance;
    while (scanf("%ld %ld", &soldier, &enemy) != EOF)
    {
        distance = (enemy - soldier);
        if (distance < 0)
            distance = distance * (-1);
        printf("%ld\n", distance);
    }
    return 0;
}