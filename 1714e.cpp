#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, a[N], ans;
int calc(int x) {
    if(x%10==1 || x%10==2 || x%10==4 || x%10==8) {
        if(((x%100)/10)%2==1) return 12;
        else return 2;
    } else if(x%10==3 || x%10==6) {
        if(((x%100)/10)%2==1) return 2;
        else return 12;
    } else if(x%10==5 || x%10==0) {
        return x%10==5?x+5:x;
    } else if(x%10==7) {
        if(((x%100)/10)%2==1) return 2;
        else return 12;
    } else if(x%10==9) {
        if(((x%100)/10)%2==1) return 2;
        else return 12;
    }
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        int ans=0;
        For(i,1,n) {
            if(i==1) ans=calc(a[i]);
            else if(ans!=calc(a[i])) {puts("No"); goto L1;}
        }
        puts("Yes");
        L1:;
    }
    return 0;
}