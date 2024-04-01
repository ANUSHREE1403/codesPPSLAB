import java.util.Scanner;

public class fibo {

    // public static void main(String[] args) {
    //     System.out.println(fibo(6));
    // }
    // public static int fibo(int n ){
    //     if(n<2)
    //     return n;
    //     return fibo(n-1)+fibo(n-2);
    // }

    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("enter no ");
        int n= sc.nextInt();
        long dp[]= new long [n+1];
        for(int i =0;i<dp.length;i++)
        dp[i]=-1;
        System.out.println(fibo( n,dp));
        sc.close();
    }

    private static long fibo(int n,long dp []) {
        if(n<2)
        return n ;
        if(dp[n]!=-1) return dp[n];
        return dp[n]=fibo(n-1,dp)+fibo(n-2,dp);
    }
    
}
