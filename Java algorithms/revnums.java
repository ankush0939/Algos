// To print from a given number to 1 in reverse order
public class revnums {
    public static void main(String[] args) {
        int n = 10;
        nums(n);
    }

    public static void nums(int a) {
        if (a > 0) {
            System.out.print(a + " ");
            nums(a-1);
        }
    }
}