import java.util.*;
public class arrangearray {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in); 
        System.out.println("enter length of array");
        int l=sc.nextInt();
        int a[]=new int[l];
        int b[] = new int[l];
        int e = 0;
        int o = 1;
        for(int i=0;i<l;i++)
        {
            a[i]=sc.nextInt();
        }
        for (int i = 0; i < l; i++) {
            if (a[i] % 2 == 0) {
                b[e] = a[i];
                e += 2;
            } else {
                b[o] = a[i];
                o += 2;
            }
        }

        for (int i = 0; i < l; i++) {
            System.out.println("On index " + i + ", the element is " + b[i]);
        }
    }
}

