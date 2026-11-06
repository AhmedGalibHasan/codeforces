#include <stdio.h>
int main(void) {
    char s[1005];
    int seen[26] = {0}, count = 0;
    if (!fgets(s, sizeof s, stdin)) return 0;
    for (int i = 0; s[i]; i++) {
        if (s[i] >= 'a' && s[i] <= 'z' && !seen[s[i] - 'a']) {
            seen[s[i] - 'a'] = 1;
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}
