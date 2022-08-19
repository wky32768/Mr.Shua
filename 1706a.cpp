#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=105;
int t, n, m, x, ans[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,m) ans[i]=2;
        For(i,1,n) {
            cin>>x;
            x=min(x, m-x+1);
            if(ans[x]==2) ans[x]=1;
            else ans[m-x+1]=1;
        }
        For(i,1,m) cout<<(ans[i]==1?"A":"B");
        puts("");
    }
    return 0;
}