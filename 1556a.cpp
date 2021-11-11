#include <bits/stdc++.h>
using namespace std;
int n,a,b;
signed main() {
    cin>>n;
    for(int i=1;i<=n;i++) {
        cin>>a>>b;
        if(abs(a-b)%2!=0) {puts("-1"); continue;}
        if(a==0 && b==0) puts("0");
        else if(a==b) puts("1");
        else puts("2");
    }
    return 0;
}