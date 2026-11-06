#include <stdio.h>
int main(void) {
    char s[105];
    int ok = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') ok = 1;
    printf("%s\n", ok ? "YES" : "NO");
    return 0;
}
