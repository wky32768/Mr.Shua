#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        int now=9, cnt=0;
        while(n) {
            if(n>=now) {
                a[++cnt]=now;
                n-=now;
                now--;
            } else {
                a[++cnt]=n;
                break;
            }
        }
        for(int i=cnt;i>=1;i--) cout<<a[i];
        puts("");
    }
    return 0;
}