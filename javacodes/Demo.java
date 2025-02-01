
// class Demo{

//     public static void main(String args[] ) {
//         args[2] = args[0]+args[1]+args[2];
//         System.out.println(args[2]);
//         System.out.println("length of array "+args.length);

//     }
// }

//wap to check if a number is prime or not

import java.util.*;
public class Demo {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("enter a number");
        int n=sc.nextInt();
        int flag=0;
        for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            System.out.println("prime");
        }
        else
        {
            System.out.println("not prime");
        }
    }
    
}


