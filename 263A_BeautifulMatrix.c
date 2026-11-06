#include <stdio.h>
#include <stdlib.h>
int main(void) {
    int row = 0, col = 0, value;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            scanf("%d", &value);
            if (value == 1) {
                row = i;
                col = j;
            }
        }
    }
    printf("%d\n", abs(row - 2) + abs(col - 2));
    return 0;
}
