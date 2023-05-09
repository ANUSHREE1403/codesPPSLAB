#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Enter the number of elements in the arrays: ");
    scanf("%d", &n);

    int a[n];
    int b[n];
    int c[n];

    printf("Enter the elements of the first array:\n");
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Enter the elements of the second array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
 
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        for(int k=0;k<n;k++){
           c[k]=a[i]+b[j];
        }
      }
    }
        
    printf("The sum of the corresponding elements of the array are:");
    for(int k=0;k<n;k++){
           printf("%d",c[k]);
           printf(" ");
        }

    return 0;
}
