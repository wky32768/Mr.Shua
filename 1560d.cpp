#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=55;
int t,n,dig[N],c[N];
int solve(int x) {
    int cnt=0,cnt2=0,h=x;
    while(h) {
        dig[++cnt]=h%10;
        h/=10;
    }
    int ans=105;
    for(int i=1;i<=pow(2,60);i*=2) {
        int now=i;
        cnt2=0;
        while(now) {
            c[++cnt2]=now%10;
            now/=10;
        }
        int now1=cnt,now2=cnt2;
        while(now1>=1) {
            if(dig[now1]==c[now2]) {
                now2--;
                if(now2==0) break;
            }
            now1--;
        }
        ans=min(ans,cnt-(cnt2-now2)+now2);
    }
    return ans;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        cout<<solve(n)<<'\n';
    }
    return 0;
}