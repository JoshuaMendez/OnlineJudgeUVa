#include <cstdio>
#include <cstring>

int main() {
    int n, c = 0;
    scanf("%d", &n);
    while (n--) {
        char w[10];
        int m;
        scanf("%s", w);
        if (!strcmp(w, "donate")) {
            scanf("%d", &m);
            c += m;
        }
        else printf("%d\n", c);
    }
    return 0;
}