#include <stdio.h>
int main(void) {
    int n, anton = 0, danik = 0;
    char s[100005];
    scanf("%d%s", &n, s);
    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') anton++;
        else danik++;
    }
    if (anton > danik) printf("Anton\n");
    else if (danik > anton) printf("Danik\n");
    else printf("Friendship\n");
    return 0;
}
