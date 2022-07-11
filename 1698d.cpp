#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=500005;
int t, n, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        int l=1, r=n, ans;
        while(l<=r) {
            int mid=(l+r)>>1, tot=0;
            cout<<"? "<<l<<" "<<mid<<'\n';
            For(i,1,mid-l+1) {
                cin>>a[i];
                if(l<=a[i] && a[i]<=mid) tot++;
            }
            if(tot%2==1) ans=mid, r=mid-1;
            else l=mid+1;
        }
        cout<<"! "<<ans<<'\n';
    }
    return 0;
}