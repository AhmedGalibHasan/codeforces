#include <stdio.h>
int main(void) {
    int n, ans = 0;
    scanf("%d", &n);
    while (n--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if (a + b + c >= 2) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
