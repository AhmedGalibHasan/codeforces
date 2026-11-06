#include <stdio.h>
int main(void) {
    int n, volume;
    double sum = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &volume);
        sum += volume;
    }
    printf("%.12f\n", sum / n);
    return 0;
}
