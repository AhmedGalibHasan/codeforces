#include <stdio.h>
int main(void) {
    int n, friend, giver[105];
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        scanf("%d", &friend);
        giver[friend] = i;
    }
    for (int i = 1; i <= n; i++)
        printf("%d%c", giver[i], i == n ? '\n' : ' ');
    return 0;
}
