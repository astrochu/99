#include <stdio.h>

int main() {
    for (int i = 1; i <= 9; i++) {
        for (int j = 1; j <= 7; j+=3) {
            printf("%dx%d=%2d  ", j, i, i * j);
        }
        printf("\n");
    }

    printf("\n");

    for (int k = 1; k <= 9; k++) {
        for (int l = 2; l <= 8; l+=3) {
            printf("%dx%d=%2d  ", l, k, k * l);
        }
        printf("\n");
    }

    printf("\n");

    for (int o = 1; o <= 9; o++) {
        for (int p = 3; p <= 9; p+=3) {
            printf("%dx%d=%2d  ", p, o, o * p);
        }
        printf("\n");
    }

    return 0;
}







