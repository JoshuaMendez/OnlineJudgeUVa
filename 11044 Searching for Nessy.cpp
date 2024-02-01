#include <cstdio>

int main() {

    int it, a, b;
    scanf("%d", &it);
    while (it--) {
        scanf("%d %d", &a, &b);
        printf("%d\n", (a/3)*(b/3));
    }

    return 0;
}