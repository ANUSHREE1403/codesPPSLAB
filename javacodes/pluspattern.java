public class pluspattern {
    public static void main(String[] args) {
        int mid=5/2;
       for(int i=0;i<5;i++)
        { 
            for(int j=0;j<5;j++)
            {
                if(i==mid||j==mid)
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
 