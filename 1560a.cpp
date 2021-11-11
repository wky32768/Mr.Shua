#include <bits/stdc++.h>
using namespace std;
int t,n;
bool ok(int x) {return !(x%10==3 || x%3==0);}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        int now=1,tot=0;
        while(tot<n) {
            if(ok(now)) tot++;
            now++;
        }
        cout<<now-1<<'\n';
    }
    return 0;
}