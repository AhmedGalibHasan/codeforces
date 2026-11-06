#include <stdio.h>
int main(void) {
    int n, current = 0, best = 0;
    scanf("%d", &n);
    while (n--) {
        int left, entered;
        scanf("%d%d", &left, &entered);
        current = current - left + entered;
        if (current > best) best = current;
    }
    printf("%d\n", best);
    return 0;
}
