#include <stdio.h>

int main() {
    int num, digit, sum, temp;
    for (num = 1; num <= 100; num++) {
        int order = 0;
        temp = num;
        while (temp != 0) {
            temp /= 10;
            order++;
        }
        sum = 0;
        temp = num;
        while (temp != 0) {
            digit = temp % 10;
            int power = 1;
            for (int i = 0; i < order; i++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }
        if (num == sum) {
            printf("%d\n", num);
        }
    }
    return 0;
}
