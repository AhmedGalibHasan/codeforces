#include <stdio.h>
int main(void) {
    long long k, n, w;
    scanf("%lld%lld%lld", &k, &n, &w);
    long long cost = k * w * (w + 1) / 2;
    printf("%lld\n", cost > n ? cost - n : 0);
    return 0;
}
