#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t, n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%3==0) cout<<n/3<<" "<<n/3+1<<" "<<n/3-1<<'\n';
        else if(n%3==1) cout<<n/3<<" "<<n/3+2<<" "<<n/3-1<<'\n';
        else if(n%3==2) cout<<n/3+1<<" "<<n/3+2<<" "<<n/3-1<<'\n';
    }
    return 0;
}