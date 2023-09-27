#include <stdio.h>

int algoritmo(int rep)
{
    int numeroIteraciones = 1;

    while (rep != 1)
    {
        ++numeroIteraciones;
        if (rep % 2 != 0)
        {
            rep = 3 * rep + 1;
        }
        else
        {
            rep = rep / 2;
        }
    }

    return numeroIteraciones;
}

int main()
{
    int i, j, rep, resAlgoritmo, i2, j2;
    ;
    while (scanf("%d %d", &i, &j) != EOF)
    {
        int mayor = 0;
        if (i == j)
        {
            resAlgoritmo = algoritmo(i);
            if (resAlgoritmo > mayor)
                mayor = resAlgoritmo;
        }
        else if (i > j)
        {
            for (rep = j; rep <= i; rep++)
            {
                resAlgoritmo = algoritmo(rep);
                if (resAlgoritmo > mayor)
                    mayor = resAlgoritmo;
            }
        }
        else if (j > i)
        {
            for (rep = i; rep <= j; rep++)
            {
                resAlgoritmo = algoritmo(rep);
                if (resAlgoritmo > mayor)
                    mayor = resAlgoritmo;
            }
        }

        printf("%d %d %d\n", i, j, mayor);
    }

    return 0;
}