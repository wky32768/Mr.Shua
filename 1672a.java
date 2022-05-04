import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int tt=1;tt<=t;tt++) {
            int n=sc.nextInt(), tot=0;
            for(int i=1;i<=n;i++) {
                int x=sc.nextInt();
                tot+=(x-1);
            }
            if(tot%2==1) System.out.println("errorgorn");
            else System.out.println("maomao90");
        }
    }
}