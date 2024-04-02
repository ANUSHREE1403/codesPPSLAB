
    
    import java.util.*;

    public class clearbit {
    public static void main(String[] args) {
       int n=5;
       int p=2 ;
       int bitMask=1<<p;
       int notbitMask = ~(bitMask);
       int newno= notbitMask&n;
       System.out.println(newno);
       
    }
}

