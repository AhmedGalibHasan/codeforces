#include <stdio.h>
int main(void) {
    char s[105];
    char target[] = "hello";
    int j = 0;
    scanf("%s", s);
    for (int i = 0; s[i] && j < 5; i++)
        if (s[i] == target[j]) j++;
    printf("%s\n", j == 5 ? "YES" : "NO");
    return 0;
}
