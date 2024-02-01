#include <cstdio>

int main() {
    int T, L, W, H, c = 1;

    scanf("%d", &T);
    while (T--) {
        scanf("%d %d %d", &L, &W, &H);
        if (L <= 20 && W <= 20 && H <= 20) { printf("Case %d: good\n", c++); }
        else { printf("Case %d: bad\n", c++); }
    }
    return 0;
}