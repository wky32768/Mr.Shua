#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t, n, a[4];
bool open[4];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,3) cin>>a[i];
        memset(open, 0, sizeof open);
        For(i,1,3) if(!a[i]) open[i] = 1;
        while(a[n]) {
            open[n]=1;
            n=a[n];
        }
        For(i,1,3) if(!open[i]) {puts("NO"); goto L1;}
        puts("YES");
        L1:;
    }
    return 0;
}