#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b; i++)
using namespace std;
const int N=200005;
int t, n, cc, q, l, r, a[N], b[N], c[N], x;
char ch[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>cc>>q;
        scanf("%s", ch+1);
        c[0]=n;
        For(i,1,cc) {
            cin>>a[i]>>b[i];
            c[i]=c[i-1]+(b[i]-a[i]+1);
        }
        while(q--) {
            scanf("%lld", &x);
            while(!(x>=1 && x<=n)) {
                int l=0, r=cc, ans=0;
                while(l<=r) {
                    int mid=(l+r)>>1;
                    if(c[mid]<x) {
                        ans=mid; l=mid+1;
                    } else r=mid-1;
                }
                // cout<<"ans="<<ans<<'\n';
                x=a[ans+1]+(x-c[ans])-1;
                // cout<<"x="<<x<<'\n';
            }
            cout<<ch[x]<<'\n';
        }
    }
    return 0;
}