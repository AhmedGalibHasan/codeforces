#include <stdio.h>
int main(void) {
    int n, ans = 0;
    char s[55];
    scanf("%d%s", &n, s);
    for (int i = 1; i < n; i++)
        if (s[i] == s[i - 1]) ans++;
    printf("%d\n", ans);
    return 0;
}
