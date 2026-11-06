#include <stdio.h>
int main(void) {
    int a[4], unique = 0;
    for (int i = 0; i < 4; i++) scanf("%d", &a[i]);
    for (int i = 0; i < 4; i++) {
        int seen = 0;
        for (int j = 0; j < i; j++)
            if (a[j] == a[i]) seen = 1;
        if (!seen) unique++;
    }
    printf("%d\n", 4 - unique);
    return 0;
}
