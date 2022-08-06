#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int n, q, a[N], sum1[N], sum2[N], x, y;
signed main() {
    cin>>n>>q;
    For(i,1,n) cin>>a[i];
    For(i,1,n-1) {
        if(a[i+1]<a[i]) sum1[i]=sum1[i-1]+(a[i]-a[i+1]);
        else sum1[i]=sum1[i-1];
    }
    sum1[n]=sum1[n-1];
    for(int i=n-1;i>=1;i--) {
        if(a[i+1]>a[i]) sum2[i]=sum2[i+1]+(a[i+1]-a[i]);
        else sum2[i]=sum2[i+1];
    }
    // For(i,1,n-1) cout<<sum1[i]<<" ";
    // puts("");
    // For(i,1,n-1) cout<<sum2[i]<<" ";
    // puts("");
    while(q--) {
        cin>>x>>y;
        if(x<y) cout<<sum1[y-1]-sum1[x-1]<<'\n';
        else cout<<sum2[y]-sum2[x]<<'\n';
    }
    return 0;
}