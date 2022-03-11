import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        for(int i=1;i<=t;i++) {
            int l=sc.nextInt(), r=sc.nextInt(), a=sc.nextInt();
            if(r%a==(a-1) || (int)r/a*a-1<l) {
                System.out.println(r/a+r%a);
            } else {
                System.out.println(r/a+a-2);
            }



        }

        sc.close();
    }
}