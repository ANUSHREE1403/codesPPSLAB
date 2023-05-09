#include <stdio.h>

int main() {
    int n,s,b;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];
    printf("Enter the elements of the array:\n");

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }

    printf("enter element for searching %d.\n", s);
    for(int i=0;i<n;i++){
        if(a[i]==s){
            b=i;
            break;
        }
    }
    if(b==0)
    printf("element not found");
    else
    printf("element found at index: %d",b);
   

    return 0;
}
