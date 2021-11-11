#include <bits/stdc++.h>
using namespace std;
int t,n,s,x,c;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>s;
        x=n-(n%2==0?n/2:(n+1)/2)+1;
        cout<<s/x<<'\n';
    }
    return 0;
} 