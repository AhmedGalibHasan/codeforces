#include <stdio.h>
int main(void) {
    int n, opinion, hard = 0;
    scanf("%d", &n);
    while (n--) {
        scanf("%d", &opinion);
        if (opinion == 1) hard = 1;
    }
    printf("%s\n", hard ? "HARD" : "EASY");
    return 0;
}
