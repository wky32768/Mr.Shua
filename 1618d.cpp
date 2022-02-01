#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t,n,m,a[N],ii,jj;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,n) cin>>a[i];
        sort(a+1,a+n+1);
        int ans=0;
        For(i,1,n-2*m) ans+=a[i];
        For(i,n-2*m+1,n-m) ans+=a[i]/a[i+m];
        cout<<ans<<'\n';
    }
    return 0;
}