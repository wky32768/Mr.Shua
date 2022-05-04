import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int tt=1;tt<=t;tt++) {
            String str=sc.next();
            int tot=0, op=0;
            for(int i=0;i<str.length();i++) {
                if(str.charAt(i)=='A') tot++;
                else if(str.charAt(i)=='B') tot--;
                if(tot<0) {
                    System.out.println("NO");
                    op=1; break;
                }
                // System.out.println("i="+i+"char="+str.charAt(i));
                if(i+1==str.length() && str.charAt(i)!='B') {
                    System.out.println("NO");
                    op=1; break;
                }
            }
            if(op==0) System.out.println("YES");
        }
        sc.close();
    }
}
