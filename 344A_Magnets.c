#include <stdio.h>
#include <string.h>
int main(void) {
    int n, groups = 1;
    char previous[5], current[5];
    scanf("%d%s", &n, previous);
    for (int i = 1; i < n; i++) {
        scanf("%s", current);
        if (strcmp(current, previous) != 0) groups++;
        strcpy(previous, current);
    }
    printf("%d\n", groups);
    return 0;
}
