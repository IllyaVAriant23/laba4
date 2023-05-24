#include <stdio.h>

int main() {
    int a = 1;

    for (int i = 22; i <= 100; i++) {
        if (i % 7 == 0) {
            a *= i;
        }
    }

    printf("Dobutok khatnykh 7: %d\n", a);

    return 0;
}
//2
 #include <stdio.h>

int main() {
    int a = 1;
    int i = 22;

    while (i <= 100) {
        if (i % 7 == 0) {
            a *= i;
        }
        i++;
    }

    printf("Dobutok khatnykh 7: %d\n", a);

    return 0;
}
//3
 #include <stdio.h>

int main() {
    int a= 1;
    int i = 22;

    do {
        if (i % 7 == 0) {
            a *= i;
        }
        i++;
    } while (i <= 100);

    printf("Dobutok khatnykh 7: %d\n", a);

    return 0;
}

