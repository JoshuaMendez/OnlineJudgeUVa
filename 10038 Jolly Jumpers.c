#include <stdio.h>

int abs(int i)
{
    if (i < 0)
        i = i * (-1);

    return i;
}

int main()
{
    int array[3000], i, e, n, cont, flag, newArray[3000];

    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; ++i)
        {
            scanf("%d", &array[i]);
        }

        for (i = 0; i < (n - 1); ++i)
        {
            newArray[i] = abs(array[i] - array[i + 1]);
        }

        cont = 0;
        for (i = 1; i < n; ++i)
        {
            flag = 0;
            for (e = 0; e < (n - 1) && flag == 0; ++e)
            {
                if (newArray[e] == i)
                {
                    cont += 1;
                    flag = 1;
                }
            }
        }

        if (cont == (n - 1))
            printf("Jolly\n");
        else
        {
            printf("Not jolly\n");
        }
    }
}