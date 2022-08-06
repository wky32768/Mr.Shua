#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=3e5+5;
int t, n, m, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int at=0, mx=0, mn=1e18;
        For(i,1,n) {
            int tot=0;
            For(j,1,m) {
                cin>>a[j];
                tot+=a[j]*j;
            }
            if(tot>mx) {mx=tot; at=i;}
            if(tot<mn) mn=tot;
        }
        cout<<at<<" "<<mx-mn<<'\n';
    }
    return 0;
}