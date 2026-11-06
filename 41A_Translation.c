#include <stdio.h>
#include <string.h>
int main(void) {
    char s[105], t[105];
    scanf("%s%s", s, t);
    int n = (int)strlen(s);
    int ok = n == (int)strlen(t);
    for (int i = 0; ok && i < n; i++)
        if (s[i] != t[n - 1 - i]) ok = 0;
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
