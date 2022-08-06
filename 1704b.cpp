#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++) 
using namespace std;
const int N=200005;
int t, n, x, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>x;
        For(i,1,n) cin>>a[i];
        int ans=0, mn=a[1], mx=a[1];
        For(i,2,n) {
            if(a[i]<mn) mn=a[i];
            if(a[i]>mx) mx=a[i];
            if(mx-mn>2*x) {ans++; mn=mx=a[i];}
        }
        cout<<ans<<endl;
    }
    return 0;
}