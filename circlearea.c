#include <stdio.h>

int main() {
   double r, a, c;
   const double pi = 3.14159;

   printf("Enter the radius of the circle: ");
   scanf("%lf", &r);

   a = pi * r * r;
   c = 2 * pi * r;

   printf("Area of the circle is: %lf\n", a);
   printf("Circumference of the circle is: %lf\n", c);

   return 0;
}
