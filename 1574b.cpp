#include <bits/stdc++.h>
using namespace std;
int t,a,b,c,n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>a>>b>>c>>n;
        int mx=a+b+c-3,mn=max(max(a,b),c)-(a+b+c-(max(max(a,b),c)))-1;
        if(n<=mx && n>=mn) puts("YES");
        else puts("NO");
    }
    return 0;
}