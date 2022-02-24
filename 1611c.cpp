#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        if(a[1]==n || a[n]==n) {
            for(int i=n;i>=1;i--) cout<<a[i]<<" ";
            puts("");
        } else puts("-1");
    }
    return 0;
}

