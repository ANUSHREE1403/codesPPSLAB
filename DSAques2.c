#include<stdio.h>
#include<conio.h>
#define MAX 100
int main()
{
    int n;
    printf("enter the length of array");
    scanf("%d",&n);
    int a[MAX];
    input(a, n, 0);
    printf("Elements in the array are: ");
    for (int i = 0; i < n; i++)
     {
        printf("%d ", a[i]);
     }
}
   void input(int arr[], int n, int index) 
   {
    if (index == n) 
    {
        return;//base case
    }
    printf("Enter elements:", index+1);
    scanf("%d", &arr[index]);
    input(arr, n, index+1);
   }