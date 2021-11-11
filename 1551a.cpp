#include <bits/stdc++.h>
using namespace std;
int t,n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%3==0) cout<<n/3<<" "<<n/3<<'\n';
        else if(n%3==1) cout<<n/3+1<<" "<<n/3<<'\n';
        else cout<<n/3<<" "<<n/3+1<<'\n';
    }
    return 0;
}
