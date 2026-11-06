#include <stdio.h>
int main(void) {
    int n, ans = 0;
    scanf("%d", &n);
    while (n--) {
        int people, capacity;
        scanf("%d%d", &people, &capacity);
        if (capacity - people >= 2) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
