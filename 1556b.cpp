#include <bits/stdc++.h>
using namespace std;
const int N=100005;
int t,n,a[N],ji,ou,now,ans;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        ji=0,ou=0,now=0,ans=0;
        for(int i=1;i<=n;i++) {
            cin>>a[i];
            if(a[i]%2==1) ji++; else ou++;
        }
        if(abs(ji-ou)>=2) {puts("-1");continue;}
        if(ji-ou==1) {
            for(int i=1;i<=n;i++) if(a[i]%2==1) {
                now++;
                ans+=abs(i-(now*2-1));
            }
        } else if(ou-ji==1) {
            for(int i=1;i<=n;i++) if(a[i]%2==0) {
                now++;
                ans+=abs(i-(now*2-1));
            }
        } else {
            int ans1=0,ans2=0;
            for(int i=1;i<=n;i++) if(a[i]%2==1) {
                now++;
                ans1+=abs(i-(now*2-1));
            }
            now=0;
            for(int i=1;i<=n;i++) if(a[i]%2==0) {
                now++;
                ans2+=abs(i-(now*2-1));
            }
            ans=min(ans1,ans2);
        }
        cout<<ans<<'\n';
    }
    return 0;
}