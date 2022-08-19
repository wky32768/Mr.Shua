#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t, n, ans[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=n-1;i>=0;i--) {
            // cout<<"start: i="<<i<<'\n';
            int temp=sqrt(i*2);
            // cout<<"temp="<<temp<<'\n';
            for(int j=i;j>=temp*temp-i;j--) {
                ans[j]=temp*temp-j;
                // cout<<"debug "<<j<<" "<<ans[j]<<'\n';
            }
            i=temp*temp-i;
            // cout<<"end: i="<<i<<'\n';
        }
        For(i,0,n-1) cout<<ans[i]<<" ";
        puts("");
    }
    return 0;
}