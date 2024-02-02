#include <cstdio>
#include <cmath>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    while (N--) {
        int n;
        vector<int> v;
        scanf("%d", &n);
        while (n--) {
            int i;
            scanf("%d", &i);
            v.push_back(i);
        }
        sort(v.begin(), v.end());
        printf("%d\n", abs(2*(v[0] - v[v.size() - 1])));
    }
    return 0;
}