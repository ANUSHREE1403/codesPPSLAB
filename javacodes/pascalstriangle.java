import java.util.*;
public class pascalstriangle {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter the number of rows for Pascal's triangle: ");
        int numRows = scanner.nextInt();
        
        for (int i = 0; i < numRows; i++) {
            for (int j = 0; j <= i; j++) {
                int coefficient = calculateCoefficient(i, j);
                System.out.print(coefficient + " ");
            }
            System.out.println();
        }
    }
    
    public static int calculateCoefficient(int n, int k) {
        if (k == 0 || k == n) {
            return 1;
        } else {
            return calculateCoefficient(n - 1, k - 1) + calculateCoefficient(n - 1, k);
        }
    }
}
