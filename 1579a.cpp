#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
char ch[100005];
signed main() {
    cin>>t;
    while(t--) {
        a=b=c=0;
        scanf("%s",ch+1);
        for(int i=1;i<=strlen(ch+1);i++) {
            if(ch[i]=='A') a++;
            else if(ch[i]=='B') b++;
            else if(ch[i]=='C') c++;
        }
        puts((a+c==b && a<=b && c<=b)?"YES":"NO");
    }
    return 0;
}