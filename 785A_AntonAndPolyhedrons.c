#include <stdio.h>
#include <string.h>
int main(void) {
    int n, faces = 0;
    scanf("%d", &n);
    while (n--) {
        char name[20];
        scanf("%s", name);
        if (strcmp(name, "Tetrahedron") == 0) faces += 4;
        else if (strcmp(name, "Cube") == 0) faces += 6;
        else if (strcmp(name, "Octahedron") == 0) faces += 8;
        else if (strcmp(name, "Dodecahedron") == 0) faces += 12;
        else faces += 20;
    }
    printf("%d\n", faces);
    return 0;
}
