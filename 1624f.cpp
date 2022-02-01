#include <bits/stdc++.h>
using namespace std;
const int N=100;
int n,tot;
signed main() {
    cin>>n;
    int l=1,r=n-1,res=0,ans=0;
    while(l<=r) {
        int mid=(l+r)>>1;
        int should=mid+tot;
        int need=n-should%n;
        cout<<"+ "<<need<<'\n';
        tot+=need;
        cin>>res;
        if(res==(should+need)/n) ans=mid,l=mid+1;
        else r=mid-1;
    }
    cout<<"! "<<ans+tot<<'\n';
    return 0;
}