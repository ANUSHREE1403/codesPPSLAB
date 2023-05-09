#include <stdio.h>

int main() {
    int n, s = 0;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }

    printf("The sum of the elements of the array is %d.\n", s);

    return 0;
}
