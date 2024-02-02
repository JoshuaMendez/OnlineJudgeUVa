#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, c = 1, d, subn = 0, yOn;
    scanf("%d", &n);
    while (n--) {
        vector<int> v;
        subn = 0, yOn = 1;
        while (subn++ < 13 && yOn) {
            scanf("%d", &d);
            v.push_back(d);
        }
        if (find(v.begin(), v.end(), 0) != v.end()) printf("Set #%d: No\n", c++);
        else printf("Set #%d: Yes\n", c++);
    }
    return 0;
}