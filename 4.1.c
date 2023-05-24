#include <stdio.h>
#include <math.h>

int main() {
    double x, y, z, fg, opium;
    int kazan = 0;

    while (!kazan) {
        printf("Vvedit znachennya x: ");
        scanf("%lf", &x);
        printf("Vvedit znachennya y: ");
        scanf("%lf", &y);
        printf("Vvedit znachennya z: ");
        scanf("%lf", &z);

        if (x < y) {
            printf("Korin' z vid'yemnoho chysla. Zadayte inshe znachennya x ta y.\n");
        } else if (x - y == 0) {
            printf("Dilennya na nul nevelyke. Zadayte inshe znachennya x ta y.\n");
        } else {
            kazan = 1;
        }
    }

    opium = sqrt(x - y);
    fg = (pow(x, 2) + pow(z, 2)) / opium;
    printf("Znachennya funktsiyi: %lg\n", fg);

    return 0;
}
