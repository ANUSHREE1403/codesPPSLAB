#include<stdio.h>
#include<conio.h>
int main()
{
    int p,c,m,b,e,s;
    float P;
    printf("Input marks of Physics , Chemistry , Maths and English\n");
    scanf("%d%d%d%d%d",&p,&c,&m,&b,&e);
    s=p+c+m+b+e;
    P=s/5;
    printf("Sum of Marks entered : %d \n",s);
    printf("Percentage : %f \n",P);
    
    if(P<100&&P>90)
    {
        printf("GRADE A");
    }
    if(P>80&&P<90)
    {
        printf("GRADE B");
    }
    if(P<80&&P>60)
    {
        printf("GRADE C");
    }
    if(P<60)
    {
        printf("GRADE D");
    }
    getch();
}