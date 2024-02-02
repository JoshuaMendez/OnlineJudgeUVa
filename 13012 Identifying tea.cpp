#include <cstdio>
#include <queue>

using namespace std;

int main() {
    int N;
    while (scanf("%d", &N) != EOF) {
        int cont = 0, j = 5;
        queue<int> q;
        while (j--) {
            int tmp;
            scanf("%d", &tmp);
            q.push(tmp);
        }
        while (!q.empty()) {
            if (q.front() == N) cont++;
            q.pop();
        }
        printf("%d\n", cont);
    }
    return 0;
}