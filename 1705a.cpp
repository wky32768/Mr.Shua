#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b; i++)
using namespace std;
const int N=200005;
int t, n, x, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>x;
        For(i,1,n*2) cin>>a[i];
        sort(a+1, a+2*n+1);
        For(i,1,n) {
            if(a[i]+x>a[i+n]) {puts("NO"); goto L1;}
        }
        puts("YES");
        L1:;
    }
    return 0;
} 