public class pattern01 {
    public static void main(String[] args) {
        
        for(int i=1;i<=5;i++)
        {
            int x=1;
            for(int j=1;j<=i;j++)
            {
                System.out.print(x);
                if(x==1)
                x=0;
                else
                x=1;
            }
            System.out.println();
        }
    }
    
}
