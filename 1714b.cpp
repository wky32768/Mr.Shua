#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, a[N], ok[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        memset(ok, 0, sizeof ok);
        for(int i=n;i>=1;i--) { 
            if(ok[a[i]]) {cout<<i<<'\n'; goto L1;}
            ok[a[i]]=1;
        }
        puts("0");
        L1:;
    }
    return 0;
}