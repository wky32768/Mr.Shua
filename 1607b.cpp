#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,x,n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>x;
        for(int i=(x/4)*4+1;i<=x;i++) {
            if(n%2!=0) n+=i;
            else n-=i;
        }
        cout<<n<<'\n';
    }
    return 0;
}