#include <stdio.h>

int main() {
    int n, i, d, s;

    printf("Armstrong numbers from 1 to 100: ");

    for (i = 1; i <= 100; i++) {
        n = i;
        s = 0;

        while (n != 0) {
            d = n % 10;
            s += d * d * d;
            n /= 10;
        }

        if (i == s) {
            printf("%d ", i);
        }
    }

    return 0;
}
