#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t, n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<n<<'\n';
        for(int i=n;i>=1;i--) {
            for(int j=1;j<=n;j++) {
                if(j<i) cout<<j<<" ";
                else if(j==i) cout<<n<<" ";
                else if(j>i) cout<<j-1<<" ";
            }
            puts("");
        }
    }   
    return 0;
}