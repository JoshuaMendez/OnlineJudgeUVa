#include <cstdio>
#include <cmath>

int main() {
    double a, b, c;
    while (scanf("%lf %lf %lf", &a, &b, &c) != EOF) {
        if (ceil((a+b)/c) > 1) printf("Hunters win!\n");
        else printf("Props win!\n");
    }
    return 0;
}