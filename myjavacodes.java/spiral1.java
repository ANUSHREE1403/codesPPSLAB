import java.util.*;
public class spiral1 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the max element");
        int n=sc.nextInt();
        int a[][]=new int[2*n-1][2*n-1];
        int l=a.length;
        int b=1,c=0;
        for(int x=n;x>0;x--)
        {
            for(int i=c;i<(l-c);i++)
            {
                for(int j=c;j<(l-c);j++)
                {
                    if(i==c||j==c||i==(l-b)||j==(l-b)){
                        a[i][j]=x;
                    }
                }
            }
            c++;
            b++;
        }
        for(int i=0;i<(2*n-1);i++)
        {
            for(int j=0;j<(2*n-1);j++)
            {
                System.out.print(a[i][j]+" ");  
            }
    System.out.println();
     }   
}
}
