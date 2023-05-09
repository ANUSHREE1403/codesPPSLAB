#include<math.h> 

void main() 

{ 

int a,f=1,i=0; 

printf(" Enter the number "); 

scanf("%d",&a); 

    if(a<0) 

    printf("factorial of negative number does not exist"); 

    else 

    { 

    	for( i=1;i<=a;++i) 

    	f=f*i; 

    printf("factorial of %d is =%d",a,f); 

} 

}