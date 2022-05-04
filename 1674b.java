import java.util.*;

public class Main {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        for(int tt=1;tt<=t;tt++) {
            String str=sc.next();
            int num=(str.charAt(0)-'a')*25;
            if(str.charAt(1)>str.charAt(0)) num=num+str.charAt(1)-'a';
            else num=num+str.charAt(1)-'a'+1;
            System.out.println(num);
        }
        sc.close();
    }
}
