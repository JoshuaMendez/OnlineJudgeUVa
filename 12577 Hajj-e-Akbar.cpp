#include <cstdio>
#include <cstring>

int main() {
    int c = 1;
    char w[10];
    while (strcmp(w, "*")) {
        scanf("%s", w);
        if (strcmp(w, "*")){
            if (strcmp(w, "Hajj")) printf("Case %d: Hajj-e-Asghar\n", c++);
            else if (strcmp(w, "Umrah")) printf("Case %d: Hajj-e-Akbar\n", c++);
        }
    }
    return 0;
}