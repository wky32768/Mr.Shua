#include <bits/stdc++.h>
using namespace std;
const int N=100005;
int t,n,a[N];
bool ok;
void dfs(int at,int no,int c) {
    if(at>n) return;
    if(c==a[no]) {ok=true;return;}
    if(at==no) {dfs(at+1,no,c);return;}
    dfs(at+1,no,c+a[at]);
    dfs(at+1,no,c);
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        if(n==1) {
            if(a[1]==0) puts("YES"); else puts("NO");
            continue;
        }
        bool flag=false;
        for(int i=1;i<=n;i++) {
            ok=0;
            if (i!=1) dfs(1,i,0);//当前，去掉，计算值
            else dfs(2,i,0);
            if(ok==1) {flag=true;break;}
        }
        if(flag) puts("YES"); else puts("NO");
    }
    return 0;
}