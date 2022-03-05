import java.util.*;

public class Main {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
		while(t>0) {
			t--;
			int n=sc.nextInt(), j=0;			
			int[] a=new int[n+5];
			for(j=1;j<=n;j++) a[j]=sc.nextInt();
			shuffle(a,n);
			Arrays.sort(a,1,n+1);
			long ans1=a[1]+a[2], ans2=a[n];
			int now1=3, now2=n-1, suc=0;
			while(now1<now2) {
				if(suc==1) break;
				if(ans1<ans2) {
					System.out.println("YES");
					suc=1; break;
				}
				ans1+=a[now1]; ans2+=a[now2];
				now1++; now2--;
			}
			if(ans1<ans2 && suc==0) {
				System.out.println("YES"); suc=1;
			}
			if(suc==0) System.out.println("NO");
		}
     
    }
	
	static void shuffle(int[] a,int n) {
		Random r=new Random();
		for(int i=1;i<=n;i++) {
			int j=r.nextInt(i)+1;
			int temp=a[i]; a[i]=a[j]; a[j]=temp;
		}
	}
}