#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t;
signed main() {
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        int t=1;
        while(t<=n) t*=10;
        if(t!=1) t/=10;
        cout<<n-t<<'\n';
    }
}