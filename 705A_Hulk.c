#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        printf("%s", i % 2 ? "I hate" : "I love");
        if (i == n) printf(" it");
        else printf(" that ");
    }
    printf("\n");
    return 0;
}
