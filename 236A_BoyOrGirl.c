#include <stdio.h>
int main(void) {
    char s[105];
    int seen[26] = {0}, count = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        int index = s[i] - 'a';
        if (!seen[index]) {
            seen[index] = 1;
            count++;
        }
    }
    printf("%s\n", count % 2 ? "IGNORE HIM!" : "CHAT WITH HER!");
    return 0;
}
