#include <bits/stdc++.h>
using namespace std;
int t,n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        for(int i=1;i<=n;i++) {
            for(int j=1;j<=i;j++) cout<<"(";
            cout<<")";
            for(int j=i+1;j<=n;j++) cout<<"(";
            for(int j=1;j<=n-1;j++) cout<<")";
            puts("");
        }
    }
    return 0;
}