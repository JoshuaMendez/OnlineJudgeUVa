#include <stdio.h>

int hallarCuadrado(char matriz[101][101], int q1, int q2, int M, int N)
{
    int esDiferente = 0, e, menorEntreMyN, i, ans;

    if (M < N)
    {
        menorEntreMyN = M;
    }
    else
    {
        menorEntreMyN = N;
    }

    for (i = 1; i <= menorEntreMyN && esDiferente == 0; i++)
    {
        if ((q1 - i) >= 0 && (q2 - i) >= 0 && (q1 + i) < M && (q2 + i) < N)
        {
            if (matriz[q1 - i][q2 - i] == matriz[q1][q2] && matriz[q1 - i][q2 + i] == matriz[q1][q2] && matriz[q1 + i][q2 - i] == matriz[q1][q2] && matriz[q1 + i][q2 + i] == matriz[q1][q2])
            {
                for (e = (-1 * i); e <= i && esDiferente == 0; e++)
                {
                    if (!(matriz[q1 - i][q2 + e] == matriz[q1][q2] && matriz[q1 + i][q2 + e] == matriz[q1][q2] && matriz[q1 + e][q2 + i] == matriz[q1][q2] && matriz[q1 + e][q2 - i] == matriz[q1][q2]))
                    {
                        esDiferente = 1;
                    }
                }
            }
            else
                esDiferente = 1;
        }
        else
            esDiferente = 1;
        ans = 2 * (i - 1) + 1;
    }
    return ans;
}

int main()
{
    int T, k, j, u;
    char matriz[101][101];
    scanf("%d", &T);

    for (u = 1; u <= T; ++u)
    {
        int M, N, Q, q1, q2;

        scanf("%d %d %d", &M, &N, &Q);
        for (k = 0; k < M; ++k)
        {
            scanf("%s", matriz[k]);
        }
        printf("%d %d %d\n", M, N, Q);
        for (k = 1; k <= Q; ++k)
        {
            scanf("%d %d", &q1, &q2);

            printf("%d\n", hallarCuadrado(matriz, q1, q2, M, N));
        }
    }
    return 0;
}
