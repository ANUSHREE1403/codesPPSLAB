#include <stdio.h>
#include <math.h>

int b2d(int b) {
    int d = 0, i = 0, r;
    while (b != 0) {
        r = b % 10;
        b /= 10;
        d += r * pow(2, i);
        i++;
    }
    return d;
}

int d2b(int d) {
    int b = 0, i = 1, r;
    while (d != 0) {
        r = d % 2;
        d /= 2;
        b += r * i;
        i=i*10;
    }
    return b;
}

int main() {
    int b, d;
    printf("Enter a binary number: ");
    scanf("%d", &b);
    d = b2d(b);
    printf("Decimal equivalent = %d\n", d);
    printf("Enter a decimal number: ");
    scanf("%d", &d);
    b = d2b(d);
    printf("Binary equivalent = %d\n", b);
    return 0;
}
