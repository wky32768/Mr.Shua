import java.util.Scanner;
 
public class Main {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        long t=sc.nextLong();
		for(long i=1;i<=t;i++) {
			long n=sc.nextLong(), s=sc.nextLong();
			System.out.println(s/(n*n));
		}
     
    }
}