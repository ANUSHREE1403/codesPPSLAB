#include<conio.h>
#include<stdio.h>
int main()
{
   int a[2]= {2,3};
    int b[2]= {7,9};
    printf("A={2,3}\n");
    printf("B={7,9}\n");
    printf("AxB={");
    for(int i=0;i<2;i++)
    {
      for(int j=0;j<2;j++)
      {
        printf("(");
        printf("%d",a[i]);
        printf(",");
        printf("%d",b[j]);
        printf(")");
      }
    }
    printf("}");
}