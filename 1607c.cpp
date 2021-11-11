#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t,n,a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        sort(a+1,a+n+1);
        int ans=a[1],tot=0;
        For(i,1,n-1) {
            tot-=(a[i]+tot);
            if(a[i+1]+tot>ans) ans=a[i+1]+tot;
        }
        cout<<ans<<'\n';
    }
    return 0;
}