#include <stdio.h>
int main(void) {
    int n, count, level, passed[105] = {0};
    scanf("%d", &n);
    for (int player = 0; player < 2; player++) {
        scanf("%d", &count);
        for (int i = 0; i < count; i++) {
            scanf("%d", &level);
            if (level >= 1 && level <= n) passed[level] = 1;
        }
    }
    int ok = 1;
    for (int level = 1; level <= n; level++)
        if (!passed[level]) ok = 0;
    printf("%s\n", ok ? "I become the guy." : "Oh, my keyboard!");
    return 0;
}
