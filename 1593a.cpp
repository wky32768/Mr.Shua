#include <bits/stdc++.h>
using namespace std;
int t,a[5],mx,only;
signed main() {
    cin>>t;
    while(t--) {
        mx=0,only=1;
        for(int i=1;i<=3;i++) {
            cin>>a[i];
            if(a[i]>mx) {
                mx=a[i];
                only=1;
            } else if(a[i]==mx) only=0;
        }
        for(int i=1;i<=3;i++) {
            if(a[i]!=mx) cout<<mx-a[i]+1<<" ";
            else cout<<(only==1?"0 ":"1 ");
        }
        puts("");
    }
    return 0;
}