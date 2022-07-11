#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, k, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        For(i,1,n) cin>>a[i];
        int ans=0;
        For(i,2,n-1) {
            if(a[i]>a[i-1]+a[i+1]) ans++;
        }
        if(k>=2) cout<<ans<<'\n';
        else if(k==1) {
            int ans2=(n-1)/2;
            cout<<max(ans, ans2)<<'\n';
        }
    }
    return 0;
}