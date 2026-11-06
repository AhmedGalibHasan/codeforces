#include <stdio.h>
#include <string.h>
int main(void) {
    char s[105];
    scanf("%s", s);
    if (strstr(s, "0000000") || strstr(s, "1111111")) printf("YES\n");
    else printf("NO\n");
    return 0;
}
