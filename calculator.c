#include<stdio.h> 

int main() 

{ 

float a,b; 

char op; 

printf("Enter the numbers \n "); 

scanf(" %f%f",&a,&b); 

printf("enter the operator for calculation "); 

scanf(" %c",&op); 

switch(op) 

{ 

case '+': 

printf(" Sum of %f and %f is = %f  ",a,b,a+b); 

break; 

case '-': 

printf(" Difference of %f and %f is = %f  ",a,b,a-b); 

break; 

case '*': 

printf(" Multiplication of %f and %f is = %f  ",a,b,a*b); 

break; 

case '/': 

printf(" division of %f and %f is = %f  ",a,b,a/b); 

break; 

default : 

printf(" wrong input  "); 

} 

return 0; 

}