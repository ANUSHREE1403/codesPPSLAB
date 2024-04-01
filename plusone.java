import java.util.*;
class plusone
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("enter length of array:");
        int n = sc.nextInt();
        int l=n+1;
        int[] a = new int[n];
        System.out.println("enter elements in array:");
        for (int i = n - 1; i >= 0; i--) {
            a[i] = sc.nextInt();
        }
        
        for (int i = n - 1; i >= 0; i--) {
            if (a[i] != 9) {
                a[i] = a[i] + 1;
                break;
            } else if (i > 0) {
                a[i] = 0;
            } else {
                int[] newNo = new int[l];
                newNo[0] = 1;
                a=newNo;
            }
        }
        System.out.println("incremented array:");
        for (int i = 0; i < l; i++) {
            System.out.print( a[i] + " ");
        }
    }
}
