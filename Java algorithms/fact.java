//Find factorial of a number
public class fact {

    public static void main(String[] args) {
        int n = 5;
        int f = factorial(n);
        System.out.print(f);
    }

    static int factorial(int a) {
        if (a==1) {
            return a;
        }
        else {
            int pro = a;
            return pro*factorial(a-1);
        }
    }
    
}