#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[1005];
    scanf("%s", s);
    s[0] = (char)toupper((unsigned char)s[0]);
    printf("%s\n", s);
    return 0;
}
