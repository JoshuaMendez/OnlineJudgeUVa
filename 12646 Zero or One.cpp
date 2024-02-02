#include <cstdio>

int main() {
    int A, B, C;
    while (scanf("%d %d %d", &A, &B, &C) == 3) {
        if (A == B && B == C && A == C) printf("*\n");
        else if (A == B && C != B) printf("C\n");
        else if (A == C && B != C) printf("B\n");
        else if (B == C && A != B) printf("A\n");
    }
    return 0;
}