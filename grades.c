#include <stdio.h>

int main() {
   int m1, m2, m3, m4, m5;
   float total, percentage;
   
   printf("Enter marks of five subjects:\n");
   scanf("%d%d%d%d%d", &m1, &m2, &m3, &m4, &m5);

   total = m1 + m2 + m3 + m4 + m5;
   percentage = total / 5.0;

   if (percentage >= 90) {
      printf("Percentage: %.2f%%\n", percentage);
      printf("Grade: A\n");
   } else if (percentage >= 80 && percentage < 90) {
      printf("Percentage: %.2f%%\n", percentage);
      printf("Grade: B\n");
   } else if (percentage >= 60 && percentage < 80) {
      printf("Percentage: %.2f%%\n", percentage);
      printf("Grade: C\n");
   } else {
      printf("Percentage: %.2f%%\n", percentage);
      printf("Grade: D\n");
   }

   return 0;
}
