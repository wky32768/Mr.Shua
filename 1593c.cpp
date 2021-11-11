#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=410005;
int t,length,n,a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>length>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        sort(a+1,a+n+1);
        int st=1,ans=0;
        for(int i=n;i>=1;i--) {
            // cout<<"debug "<<st-1<<" "<<a[i]<<'\n';
            if(st-1<a[i]) ans++;
            else break;
            st+=(length-a[i]);
        }
        cout<<ans<<'\n';
    }
    return 0;
} 