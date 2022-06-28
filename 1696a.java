import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t, n, z;
        int[] a=new int[100005];
        t=sc.nextInt();
        for(int tt=1;tt<=t;tt++) {
            n=sc.nextInt(); z=sc.nextInt();
            for(int i=1;i<=n;i++) a[i]=sc.nextInt();
            int mx=0;
            for(int i=1;i<=n;i++) mx=Math.max(mx,a[i]|z);
            System.out.println(mx);
        }
        sc.close();
    }
}