#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int cases;
    cin >> cases;
    for (int i = 1; i <= cases; i++)
    {
        int farmers;
        double sum = 0;
        cin >> farmers;
        double a, b, c;
        for (int j = 1; j <= farmers; j++)
        {
            scanf("%lf %lf %lf", &a, &b, &c);
            sum += (a * c);
        }
        printf("%.0lf\n", sum);
    }
    return 0;
}