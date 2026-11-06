#include <stdio.h>
#include <string.h>
int main(void) {
    int n, x = 0;
    char s[5];
    scanf("%d", &n);
    while (n--) {
        scanf("%s", s);
        if (strchr(s, '+')) x++;
        else x--;
    }
    printf("%d\n", x);
    return 0;
}
