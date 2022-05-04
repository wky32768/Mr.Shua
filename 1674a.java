import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int tt=1;tt<=t;tt++) {
            int a=sc.nextInt(), b=sc.nextInt();
            if(b%a!=0) System.out.println("0 0");
            else System.out.println("1 "+b/a);
        }
        sc.close();
    }
}
