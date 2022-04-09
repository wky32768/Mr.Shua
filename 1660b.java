import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        while(t-->0) {
            int n=sc.nextInt(), fir=0, sec=0;
            int[] a=new int[n+1];
            for(int j=1;j<=n;j++) {
                a[j]=sc.nextInt();
                if(a[j]>fir) {sec=fir; fir=a[j];}
                else if(a[j]>sec) sec=a[j];
            }
            if(fir-sec<=1) System.out.println("YES");
            else System.out.println("NO");
        }
        sc.close();
    }
}
