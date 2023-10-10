#include <stdio.h>

int main()
{
    int x, y, stoneX, carry, stoneY, cont = 0;

    while (scanf("%d %d", &stoneX, &stoneY) && (stoneX || stoneY))
    {
        cont = 0;
        carry = 0;
        while (stoneX || stoneY)
        {
            x = stoneX;
            y = stoneY;

            x %= 10;
            y %= 10;

            if (x + y + carry >= 10)
            {
                cont++;
                carry = 1;
            }
            else
            {
                carry = 0;
            }
            stoneX /= 10;
            stoneY /= 10;
        }
        if (cont == 0)
        {
            printf("No carry operation.\n");
        }
        else if (cont == 1)
        {
            printf("%d carry operation.\n", cont);
        }
        else
        {
            printf("%d carry operations.\n", cont);
        }
    }
    return 0;
}