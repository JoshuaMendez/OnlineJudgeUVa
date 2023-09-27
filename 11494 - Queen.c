#include <stdio.h>

int valorAbsoluto(int x)
{
    if (x < 0)
    {
        x = x * (-1);
    }
    return x;
}

int main()
{
    int flag = 1;
    while (flag == 1)
    {
        int x1, y1, x2, y2, movX, movY, calc, result;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);

        if (x1 == 0 && y1 == 0 && x2 == 0 && y2 == 0)
        {
            flag = 0;
        }
        else
        {
            movY = valorAbsoluto(y2 - y1);
            movX = valorAbsoluto(x2 - x1);

            if (x1 == x2 && y1 == y2)
            {
                result = 0;
            }
            else if (movY == movX)
            {
                result = 1;
            }
            else if ((x1 == x2 && y1 != y2) || (y1 == y2 && x1 != x2))
            {
                result = 1;
            }
            else
            {
                result = 2;
            }

            printf("%d\n", result);
        }
    }
    return 0;
}