//print the GCD of two numbers
public class hcf {
    public static void main(String[] args) {
        int a = 54, b = 27;
        if (a>=b) {
            euclidrecur(a, b);
        }
        else {
            euclidrecur(b, a);
        }
    }

    public static void euclidrecur(int a, int b) {
        if (b == 0) {
            System.out.println("HCF is: " + a);
        }
        else {
            euclidrecur(b, a%b);
        }
    }
}