#include <cstdio>

int main() {
    int N = 1, n = 1, c = 1;
    while (N) {
        int a = 0, b = 0, subn;
        if (n != 0){
            scanf("%d", &n);
            if (n == 0) N = 0;
            while (n--) {
                scanf("%d", &subn);
                if (subn > 0) a++;
                else if (subn == 0) b++;
            }
            if (N) printf("Case %d: %d\n", c++, a - b);
        }
    }
    return 0;
}