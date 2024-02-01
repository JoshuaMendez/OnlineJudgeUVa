#include <cstdio>
#include <cmath>

int main() {
    int c = 1; bool flag = true;
    double calc, R = 1, N = 1;
    while (flag) {
        scanf("%lf %lf", &R, &N);
        if (R == 0 && N == 0) flag = false;
        else{
            calc = fabs(ceil((R - N)/N));
            if (calc > 26) printf("Case %d: impossible\n", c++);
            else printf("Case %d: %.0f\n", c++, calc);
        }
    }
    return 0;
}