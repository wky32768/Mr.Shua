import java.util.*;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t=sc.nextInt();
        int[] a=new int[200005];
        for(int tt=1;tt<=t;tt++) {
            int n=sc.nextInt(), ans=0;
            for(int i=1;i<=n;i++) a[i]=sc.nextInt();
            for(int i=1;i<=n;i++) if(a[i-1]==0 && a[i]!=0) ans++;
            System.out.println(ans);
        }
        sc.close();
    }
}