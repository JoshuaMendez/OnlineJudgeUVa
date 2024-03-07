#include <cstdio>
#include <cmath>
#include <algorithm>

// #include <iostream>

using namespace std;

int main() {
    int p, a, b, c, d, n;
    while(scanf("%d %d %d %d %d %d", &p, &a, &b, &c, &d, &n) == 6) {
        double minValue = -1e+100, maxValue = 0, calc;
        for (int k = 1; k <= n; k++) {
            calc = p * (sin((a * k + b)) + cos((c * k + d)) + 2);
            // cout << "calc" << calc << endl;
            minValue = max(minValue, maxValue - calc);
            // cout << "minValue" << minValue << endl;
            maxValue = max(maxValue, calc);
            // cout << "maxValue" << maxValue << endl;
        }
        printf("%.6f\n", minValue);
    }
    return 0;
}