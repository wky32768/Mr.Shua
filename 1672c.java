import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int tt=1;tt<=t;tt++) {
            int n=sc.nextInt(), l=1000005, r=0;
            int[] a=new int[n+5];
            for(int i=1;i<=n;i++) a[i]=sc.nextInt();
            for(int i=1;i<=n;i++)
                if(i!=n && a[i]==a[i+1]) {
                    l=Math.min(l, i); r=Math.max(r, i);
                }
            if(r==0 || l==r) {
                System.out.println("0");
            } else if(r-l==1) {
                System.out.println("1");
            } else {
                System.out.println(r-l-1);
            }
        }
    }
}