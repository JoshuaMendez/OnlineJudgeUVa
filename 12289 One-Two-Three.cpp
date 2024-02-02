#include <cstdio>
#include <cstring>

int main() {
    int it, cnt;
    char st[10];
    scanf("%d", &it);

    while (it--) {
		cnt = 0;
        scanf("%s", st);
	if (strlen(st) > 3) printf("3\n");
	else {
	    if (strchr(st, 'o') != NULL) cnt++;
	    if (strchr(st, 'n') != NULL) cnt++;
	    if (strchr(st, 'e') != NULL) cnt++;
	    if (cnt <= 1) printf("2\n");
	    else printf("1\n");
	}
    }
    return 0;
}
