#include <stdio.h>
#include <math.h>

int main()
{
    int iteraciones;
    long long guerreros;
    scanf("%d", &iteraciones);
    while (iteraciones--)
    {
        scanf("%lld", &guerreros);
        /* Se aplica una fórmula matemática para hayar cuantos guerreros habrían en cada espacio*/
        printf("%lld\n", (long long)floor(sqrt(2.0 * guerreros + 0.25) + 0.5) - 1);
    }

    return 0;
}