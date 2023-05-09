#include <stdio.h>

int main() {
   int a, b;
   
   printf("Enter the first number: ");
   scanf("%d", &a);

   printf("Enter the second number: ");
   scanf("%d", &b);

   if (a == b) {
      printf("The two numbers are equal.\n");
   } else {
      printf("The two numbers are not equal.\n");
   }

   return 0;
}
