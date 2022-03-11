import java.util.Scanner;

public class Main {
    
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        for(int t=1;t<=n;t++) {
            String str=sc.next(), ch=sc.next();
            int ok=0;
            //System.out.println(str+" "+ch);
            for(int i=0;i<str.length();i++) {
                //System.out.println("debug "+str.charAt(i)+" "+ch.charAt(0));
                if(str.charAt(i)==ch.charAt(0))
                    if(i%2==0 && (str.length()-i-1)%2==0) {
                        System.out.println("YES");
                        ok=1;
                        break;
                    }
            }
            if(ok==0) System.out.println("NO");
        }
        sc.close();
    }
}