#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t, n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        if(n==1) cout<<n<<'\n';
        else {
            For(i,2,n) cout<<i<<" ";
            puts("1");
        }
    }
    return 0;
}