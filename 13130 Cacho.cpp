#include <cstdio>
#include <vector>

using namespace std;

int main() {
    vector<int> f, s, t;
    for (int i = 1; i <= 5; i++) f.push_back(i);
    for (int i = 2; i <= 6; i++) s.push_back(i);
    
    int n;
    scanf("%d", &n);
    while (n--) {
        int subn, fiv = 5;;
        while (fiv--) {
            scanf("%d", &subn);
            t.push_back(subn);
        }
        
        int yOnO = 1, yOnT = 1;
        for (int i = 0; i < 5; i++) if (f[i] != t[i]) yOnO = 0;
        for (int i = 0; i < 5; i++) if (s[i] != t[i]) yOnT = 0;
        if (yOnO == 1 || yOnT == 1) printf("Y\n");
        else printf("N\n");
        t.clear();
    }
    return 0;
}