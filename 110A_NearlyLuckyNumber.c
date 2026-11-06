#include <stdio.h>
int main(void) {
    char s[20];
    int count = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        if (s[i] == '4' || s[i] == '7') count++;
    printf("%s\n", (count == 4 || count == 7) ? "YES" : "NO");
    return 0;
}
