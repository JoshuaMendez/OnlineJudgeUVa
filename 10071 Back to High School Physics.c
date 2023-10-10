#include <stdio.h>

int main()
{
    int v, t, mult;
    while (scanf("%d %d", &v, &t) != EOF)
    {
        mult = 2 * v * t;
        printf("%d\n", mult);
    }
    return 0;
}