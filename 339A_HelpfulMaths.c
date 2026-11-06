#include <stdio.h>
int main(void) {
    char s[105];
    int digits[55], count = 0;
    scanf("%s", s);
    for (int i = 0; s[i]; i++)
        if (s[i] != '+') digits[count++] = s[i] - '0';
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (digits[j] < digits[i]) {
                int tmp = digits[i];
                digits[i] = digits[j];
                digits[j] = tmp;
            }
        }
    }
    for (int i = 0; i < count; i++) {
        if (i) printf("+");
        printf("%d", digits[i]);
    }
    printf("\n");
    return 0;
}
