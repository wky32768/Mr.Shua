#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=2005;
int t, n, f[N][N], ans[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>f[0][i];
        For(i,1,n-1) {
            int length=n+1-i;
            For(j,1,length) 
                if(f[i-1][j]==length) {ans[length]=j%length;break;}
            // cerr<<"ans[length]"<<length<<" "<<ans[length]<<'\n';
            // For(j,1,n) cerr<<ans[j]<<" ";
            // puts("");
            if(i==n) continue;
            if(ans[length]) 
                for(int j=ans[length]%length+1,now=1;j!=ans[length];j=j%length+1,now++) {
                f[i][now]=f[i-1][j];
            } else For(j,1,length-1) f[i][j]=f[i-1][j];
            // For(j,1,n) cerr<<f[i][j]<<" ";
            // puts("");
        }
        For(i,1,n) cout<<ans[i]<<" ";
        puts("");
    }
    return 0;
}