#include <stdio.h>
#include <math.h>

int main() {
    float p, r, t, simpleinterest, compoundinterest, amount;
    printf("Enter the principal amount: ");
    scanf("%f", &p);
    printf("Enter the rate of interest: ");
    scanf("%f", &r);
    printf("Enter the time (in years): ");
    scanf("%f", &t);
    simpleinterest = (p* r * t) / 100;
    amount = p * pow((1 + r/100), t);
    compoundinterest = amount - p;
    printf("Simple Interest = %.2f\n", simpleinterest);
    printf("Compound Interest = %.2f\n", compoundinterest);
    return 0;
}
