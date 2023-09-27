#include <stdio.h>

long long reversar(long long numero)
{
    long long palindromo = 0, iterador;
    iterador = numero;
    while (iterador != 0)
    {
        palindromo = palindromo * 10;
        palindromo += iterador % 10;
        iterador = iterador / 10;
    }
    return palindromo;
}

int main()
{
    int numeroIteraciones, i;

    scanf("%d", &numeroIteraciones);

    for (i = 1; i <= numeroIteraciones; ++i)
    {
        int e = 0;
        long long numero, numeroSumado = 0;
        scanf("%lld", &numero);

        while (numero != reversar(numero))
        {
            e++;
            numero = numero + reversar(numero);
        }
        printf("%d %lld\n", e, numero);
    }

    return 0;
}
