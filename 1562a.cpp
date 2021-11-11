#include <bits/stdc++.h>
using namespace std;
int t,l,r;
signed main() {
    cin>>t;
    while(t--) {
        cin>>l>>r;
        if(l*2<=r) {
            cout<<(r-1)/2<<'\n';
        } else {
            cout<<r%l<<'\n';
        }
    } 
    return 0;
}
