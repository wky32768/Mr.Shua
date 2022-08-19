#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t, n, x, y, mnx, mny, mxx, mxy;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        mnx=mny=0;
        mxx=mxy=0;
        For(i,1,n) {
            cin>>x>>y;
            mnx=min(mnx, x); mny=min(mny, y);
            mxx=max(mxx, x); mxy=max(mxy, y);
        }
        cout<<(mxx-mnx+mxy-mny)*2<<'\n';
    }
    return 0;
}