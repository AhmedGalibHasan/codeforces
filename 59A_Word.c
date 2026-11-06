#include <stdio.h>
#include <ctype.h>
int main(void) {
    char s[105];
    int upper = 0, lower = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (isupper((unsigned char)s[i])) upper++;
        else lower++;
    }
    for (int i = 0; s[i]; i++) {
        unsigned char ch = (unsigned char)s[i];
        s[i] = (char)(upper > lower ? toupper(ch) : tolower(ch));
    }
    printf("%s\n", s);
    return 0;
}
