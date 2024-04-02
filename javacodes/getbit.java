import java.util.*;

public class getbit {
    public static void main(String[] args) {
       int n=5;
       int p=3;
       int bitMask=1<<p;
       
       if((bitMask & n)==0)
       {
         System.out.println("bit is 0");
       }
       else{
        System.out.println("bit is 1");
       }
    }
}
