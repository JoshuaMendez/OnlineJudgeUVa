#include <cstdio>
#include <cstring>

using namespace std;

int main() {
    int n, len;
    char numS[2000];

    scanf("%d", &n);
    while (n--) {
        scanf("%s", numS);

        len = strlen(numS);
        
        if (strcmp(numS, "1") == 0 || strcmp(numS, "4") == 0 || strcmp(numS, "78") == 0) printf("+\n");
        else if (numS[len - 1] == '5' && numS[len - 2] == '3') printf("-\n");
        else if (numS[0] == '9' && numS[len - 1] == '4') printf("*\n");
        else if (numS[0] == '1' && numS[1] == '9' && numS[2] == '0') printf("?\n");
        else printf("+\n");
        

    }
    return 0;
}