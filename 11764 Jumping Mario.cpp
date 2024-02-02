#include <cstdio>
#include <queue>
#include <iostream>
using namespace std;

int main() {
    int it, c = 1;
    scanf("%d", &it);
    while (it--) {
        int subIt, up = 0, down = 0, aux;
        queue<int> q;
        scanf("%d", &subIt);
        while (subIt--) {
            int in;
            scanf("%d", &in);
            q.push(in);
        }
        while (q.size() != 0) {
            aux = q.front();
            q.pop();
            if (q.size() > 0) {
                if (aux > q.front()) down++;
                if (aux < q.front()) up++;
            }
        }
        printf("Case %d: %d %d\n", c++, up, down);
    }
    return 0;
}