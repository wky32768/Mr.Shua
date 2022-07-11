#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t, n, a[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        int x=0, ok=0;
        For(i,1,n) {
            For(j,1,n) if(i!=j) x=x^a[j];
            // cout<<"i&x="<<i<<" "<<x<<'\n';
            if(x==a[i]) {ok=1; cout<<x<<'\n'; break;}
        }
        if(ok==0) puts("0");
    }
    return 0;
}