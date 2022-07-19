#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b; i++)
const int N=200005;
using namespace std;
int t, n, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        int start=1;
        while(a[start]==0 && start<n) start++;
        if(start==n) {puts("0"); continue;}
        int ans=0;
        For(i,start,n-1) {
            if(a[i]==0) ans++;
            else ans+=a[i];
        }
        cout<<ans<<'\n';
    }
    return 0;
}