#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1000005;
int t,n,a[N];
int gcd(int a,int b) {
    if(a==0 || b==0) return 0;
    // cout<<"gcd "<<a<<" "<<b<<'\n';
    if(a<b) swap(a,b);
    return a%b==0?b:gcd(b,a%b);
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        int ans=0;
        For(i,1,n) For(j,i+1,n) {
            if(a[i]-a[j]) {
                if(ans==0) ans=abs(a[i]-a[j]);
                else ans=gcd(ans,abs(a[i]-a[j]));
            // cout<<"now:ans="<<ans<<'\n';
            }
        }
        if(ans==0) puts("-1");
        else cout<<ans<<'\n';
    }
    return 0;
}