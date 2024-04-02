
    import java.util.*;

    public class updatebit {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter the value you want to update");
        //1=set and 0=clear
        int opr=sc.nextInt() ;
        int n=5;
        int p=1;
        int bitMask=1<<p;

        if(opr==1)
        {
            //set
          int newno=bitMask|n;
          System.out.println(newno);
        }
        else
        {
          //clear
          int newbitMask=~(bitMask);
          int newno=newbitMask&n;
          System.out.println(newno);
        }
    }
}
