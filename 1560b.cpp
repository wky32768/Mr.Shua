#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
signed main() {
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        if(a>b) swap(a,b);
        if((b-a)*2<b || c>(b-a)*2) {puts("-1"); continue;}
        if(c>(b-a)) cout<<c-(b-a)<<'\n';
        else cout<<c+(b-a)<<'\n';
    }
    return 0;
}