#include <stdio.h>

int main() {
    int n, min,max;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    max=a[0];
    min=a[0];
     for (int i = 0; i < n; i++) {
       for(int j=0;j<n;j++){
        if(a[i]>max)
        max=a[i];
       }
       if(a[i]<min)
       min=a[i];
    }

    printf("The maximum elements of the array is %d.\n", min);
    printf("The minimum elements of the array is %d.\n", max);

    return 0;
}
