import java.util.*;
public class pattern04 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int ar[][]=new int[n][n];
        int x=1;
        for(int a=0;a<=2*n-2;a++)
        {
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i+j==a)
                {
                    ar[i][j]=x;
                    x++;
                }
            }
            System.out.println();
        }
    }
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                System.out.print(ar[i][j]+"   ");
            }
            System.out.println();
            System.out.println();
        }
    
        sc.close();
}
}
