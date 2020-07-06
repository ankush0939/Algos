//Print all the numnbers from 1 to a given number
public class printnums {
    
    public static void main(String[] args) {
        int n = 10;
        pnums(n,1);
    }

    public static void pnums(int a, int b) {
        if (b <= a) {
            System.out.print(b + " ");
            pnums(a,b+1);
        }
    }
}