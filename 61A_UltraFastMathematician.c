#include <stdio.h>
int main(void) {
    char a[105], b[105];
    scanf("%s%s", a, b);
    for (int i = 0; a[i]; i++)
        putchar(a[i] == b[i] ? '0' : '1');
    putchar('\n');
    return 0;
}
