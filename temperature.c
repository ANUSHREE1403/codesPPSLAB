#include <stdio.h>

int main() {
   double c, f;
   
   printf("Enter temperature in Celsius: ");
   scanf("%lf", &c);

   f = (c * 9 / 5) + 32;

   printf("%.2lf Celsius = %.2lf Fahrenheit\n", c, f);

   return 0;
}