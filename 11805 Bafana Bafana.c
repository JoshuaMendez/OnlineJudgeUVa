#include <stdio.h>

int main()
{
    int T, N, K, P, i;
    scanf("%d", &T);

    for (i = 1; i <= T; ++i)
    {
        scanf("%d %d %d", &N, &K, &P);
        int cont = 1, num = K;

        while (cont <= P)
        {
            if (num == N)
            {
                num = 0;
            }
            num++;
            cont++;
        }

        printf("Case %d: %d\n", i, num);
    }
    return 0;
}