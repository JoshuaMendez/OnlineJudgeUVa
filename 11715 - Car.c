#include <stdio.h>
#include <math.h>

int main()
{
    int caso = 5;
    double variable1, variable2, variable3;
    int flag = 1;
    int contadorCasos = 0;

    while (flag == 1)
    {
        scanf("%d", &caso);
        if (caso == 0)
        {
            flag = 0;
        }
        else
        {
            scanf("%lf %lf %lf", &variable1, &variable2, &variable3);
            double u, a, t, v, s;
            if (caso == 1)
            {
                ++contadorCasos;
                a = ((variable2 - variable1) / (variable3));
                s = ((variable1 * variable3) + ((0.5) * a * pow(variable3, 2)));
                printf("Case %d: %.3f %.3f\n", contadorCasos, s, a);
            }

            else if (caso == 2)
            {
                ++contadorCasos;
                t = ((variable2 - variable1) / variable3);
                s = (variable1 * t) + ((0.5) * variable3 * pow(t, 2));
                printf("Case %d: %.3f %.3f\n", contadorCasos, s, t);
            }

            else if (caso == 3)
            {
                ++contadorCasos;
                v = sqrt(pow(variable1, 2) + (2 * variable2 * variable3));
                t = ((v - variable1) / variable2);
                printf("Case %d: %.3f %.3f\n", contadorCasos, v, t);
            }

            else if (caso == 4)
            {
                ++contadorCasos;
                u = sqrt(pow(variable1, 2) - (2 * variable2 * variable3));
                t = ((variable1 - u) / variable2);
                printf("Case %d: %.3f %.3f\n", contadorCasos, u, t);
            }
        }
    }

    return 0;
}
