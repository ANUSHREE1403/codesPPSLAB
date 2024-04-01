#include <stdio.h>

int isPrime(int n) {
    if (n<= 1) {
        return 0;//notprime
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;//notprime
        }
    }
    return 1;//prime
}
int main() {
    int n,x=0;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    int b[n];
    printf("Enter the elements of the array:\n");
    for (int i=0;i<n;i++) {
        scanf("%d", &a[i]);
    }
    printf("Prime elements are: ");
    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            b[x] = a[i];
            x++;
        }
    }
    for (int i = 0; i < x; i++) {
        printf("%d ", b[i]);
    }
    return 0;
}
