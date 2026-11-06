#include <stdio.h>
int distinct(int year) {
    int seen[10] = {0};
    for (int i = 0; i < 4; i++) {
        int digit = year % 10;
        if (seen[digit]) return 0;
        seen[digit] = 1;
        year /= 10;
    }
    return 1;
}
int main(void) {
    int year;
    scanf("%d", &year);
    do {
        year++;
    } while (!distinct(year));
    printf("%d\n", year);
    return 0;
}
