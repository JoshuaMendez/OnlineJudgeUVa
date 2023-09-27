#include <stdio.h>

int main()
{
    int i, iteraciones;

    scanf("%d", &iteraciones);

    for (i = 1; i <= iteraciones; i++)
    {
        int x, y;
        scanf("%d %d", &x, &y);
        if (x < y)
            printf("<\n");
        else if (x > y)
            printf(">\n");
        else if (x == y)
            printf("=\n");
    }

    return 0;
}