#include <bits/stdc++.h>
using namespace std;
int t,a[4];
signed main() {
    cin>>t;
    while(t--) {
        for(int i=1;i<=3;i++) cin>>a[i];
        sort(a+1,a+4);
        if(((a[3]-a[2])-(a[2]-a[1]))%3==0) puts("0");
        else puts("1");
    }
    return 0;
}