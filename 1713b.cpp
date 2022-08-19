#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t, n, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        int down=0, ok=1;
        For(i,2,n) {
            if(a[i-1]>a[i]) down=1;
            if(a[i-1]<a[i] && down==1) ok=0;
        }
        cout<<(ok==1?"YES":"NO")<<'\n';
    }
    return 0;
}