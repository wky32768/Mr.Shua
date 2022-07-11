#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t;
char ch[200005];
char now[5];
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s", ch+1);
        int n=strlen(ch+1);
        int ans=0, cnt=0;
        For(i,1,n) {
            bool ok=1;
            if(cnt==0) {
                now[++cnt]=ch[i];
                ans++;
            } else if(cnt<=2) {
                bool flag=0;
                For(j,1,cnt) if(ch[i]==now[j]) {flag=1; break;}
                if(!flag) {
                    now[++cnt]=ch[i];
                    if(cnt==3) ok=0;
                }
            }
            if(cnt==3 && ok==1) {
                bool flag=0;
                For(j,1,cnt) if(ch[i]==now[j]) flag=1;
                if(!flag) {cnt=0; i--;}
                else if(flag) continue;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}