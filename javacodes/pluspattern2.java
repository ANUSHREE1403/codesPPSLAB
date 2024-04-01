public class pluspattern2 {
    public static void main(String[] args) {
        int n=5,m=7;
        int mid1=n/2;
        int mid2=m/2;
        for(int i=0;i<n;i++)
        { 
            for(int j=0;j<m;j++)
            {
                if(i==mid1||j==mid2)
                {
                    System.out.print("*");
                }
                else
                System.out.print(" ");
            }
            System.out.println();
        }
    }
}
