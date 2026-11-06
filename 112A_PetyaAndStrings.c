#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main(void) {
    char a[105], b[105];
    scanf("%s%s", a, b);
    for (int i = 0; a[i]; i++) {
        a[i] = (char)tolower((unsigned char)a[i]);
        b[i] = (char)tolower((unsigned char)b[i]);
    }
    int cmp = strcmp(a, b);
    if (cmp < 0) printf("-1\n");
    else if (cmp > 0) printf("1\n");
    else printf("0\n");
    return 0;
}
