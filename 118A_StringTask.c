#include <stdio.h>
#include <ctype.h>
int is_vowel(char ch) {
    ch = (char)tolower((unsigned char)ch);
    return ch == 'a' || ch == 'o' || ch == 'y' || ch == 'e' || ch == 'u' || ch == 'i';
}
int main(void) {
    char s[105];
    scanf("%s", s);
    for (int i = 0; s[i]; i++) {
        if (!is_vowel(s[i]))
            printf(".%c", tolower((unsigned char)s[i]));
    }
    printf("\n");
    return 0;
}
