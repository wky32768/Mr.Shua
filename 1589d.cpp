#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n;
int ask(int x,int y) {
    if(x==y) return 0;
    cout<<"? "<<x<<" "<<y<<'\n';
    int ans=0; cin>>ans;
    return ans;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        int l=1,r=n,ans=0;
        while(l<=r) {
            int mid=(l+r)>>1;
            if(ask(1,mid)==0) ans=mid,l=mid+1;
            else r=mid-1;
        }
        int i=ans,j=i+ask(ans,n)-ask(ans+1,n)+1;
        int k=j+ask(j,n)-ask(j+1,n);
        cout<<"! "<<i<<" "<<j<<" "<<k<<'\n';
    }
    return 0;
}