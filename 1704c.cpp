#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++) 
using namespace std;
const int N=200005;
int t, n, m, a[N], b[N];
bool cmp(int x, int y) {return x>y;}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,m) cin>>a[i];
        sort(a+1, a+m+1);
        For(i,1,m-1) b[i]=a[i+1]-a[i]-1;
        b[m]=n+a[1]-a[m]-1;
        sort(b+1, b+m+1, cmp);
        // puts("Debug ");
        // For(i,1,m) cout<<b[i]<<" ";
        // puts("");
        int ans=0, tot=0;
        while(1) {
            tot++;
            if(tot>m) break;
            if(b[tot]-(tot-1)*4<=0) break;
            else ans+=max(b[tot]-(tot-1)*4-1, 1ll);
        }
        cout<<n-ans<<'\n';
    }
    return 0;
}