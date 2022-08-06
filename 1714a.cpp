#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, H, M, h[N], m[N];
int calc(int x) {
    if(h[x]<H || (h[x]==H && m[x]<M)) h[x]+=24;
    return (h[x]-H)*60+m[x]-M;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>H>>M;
        For(i,1,n) cin>>h[i]>>m[i];
        int ans=0x3f3f3f3f;
        For(i,1,n) ans=min(ans, calc(i));
        cout<<ans/60<<" "<<ans%60<<'\n';
    }
    return 0;
}