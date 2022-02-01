#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=55;
int t,n,a[N],used[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        sort(a+1,a+n+1);
        memset(used,0,sizeof used);
        bool ok=1;
        for(int i=n;i>=1;i--) { // seek for i'th
            bool ok_i=0;
            For(j,1,n) if(used[j]==0) {
                int now=a[j];
                while(now && now!=i) now/=2;
                if(now==i) {ok_i=1; used[j]=1; break;}
            }
            if(ok_i==0) {ok=0;break;}
        }
        puts(ok==1?"YES":"NO");
    }
    return 0;
}