#include <stdio.h>

int main() {
    float mark1, mark2, mark3, mark4, mark5;
    float sum, percentage;
    printf("Enter marks for physics: ");
    scanf("%f", &mark1);
    printf("Enter marks for chemistry: ");
    scanf("%f", &mark2);
    printf("Enter marks for mathematics: ");
    scanf("%f", &mark3);
    printf("Enter marks for computer science: ");
    scanf("%f", &mark4);
    printf("Enter marks for english: ");
    scanf("%f", &mark5);
    sum = mark1 + mark2 + mark3 + mark4 + mark5;
    percentage = sum / 5;
    printf("Sum of marks: %.2f\n", sum);
    printf("Percentage marks obtained: %.2f%%\n", percentage);
    return 0;
}
