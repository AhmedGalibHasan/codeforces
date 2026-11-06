#include <stdio.h>
int main(void) {
    int n, h, height, width = 0;
    scanf("%d%d", &n, &h);
    for (int i = 0; i < n; i++) {
        scanf("%d", &height);
        width += height > h ? 2 : 1;
    }
    printf("%d\n", width);
    return 0;
}
