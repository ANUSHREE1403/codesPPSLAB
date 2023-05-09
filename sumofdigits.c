#include <stdio.h>

int main() {
    int n, s = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (n != 0) {
        r = n % 10;
        s += r;
        n /= 10;
    }

    printf("Sum of digits of the entered number: %d\n", s);

    return 0;
}
