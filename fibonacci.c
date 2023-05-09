#include <stdio.h>

int main() {
   int n, i, f = 0, s = 1, nxt;
   
   printf("Enter a number: ");
   scanf("%d", &n);

   printf("Fibonacci series up to %d:\n", n);

   for (i = 0; i < n; i++) {
      if (i <= 1) {
         nxt = i;
      } else {
         nxt = f + s;
         f = s;
         s = nxt;
      }
      printf("%d ", nxt);
   }

   return 0;
}
