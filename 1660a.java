import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int i=1;i<=t;i++) {
            int a=sc.nextInt(), b=sc.nextInt();
            if(a==0) {
                System.out.println(1);
            } else {
                System.out.println(a+2*b+1);
            }
        }
        sc.close();
    }

}