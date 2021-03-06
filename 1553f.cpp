//https://www.cnblogs.com/alex-wei/p/CF1553.html
#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
#define lb(x) x&(-x)
using namespace std;
const int N=500005;
int n,a[N],ans,s;
struct bit {
    int t[N];
    void add(int x,int v) {while(x<N) {t[x]+=v;x+=lb(x);}}
    int query(int x) { //求前缀和
        int ans=0;
        while(x) {ans+=t[x];x-=lb(x);}
        return ans;
    }
} now,sav;
signed main() {
    cin>>n;
    For(i,1,n) {
        cin>>a[i];
        ans+=a[i]*(i-1)+s-sav.query(a[i]);
        for(int j=a[i];j<=N;j+=a[i]) {
            int mn=min(j+a[i],N);
            ans-=(now.query(mn-1)-now.query(j-1))*j;
            sav.add(j,j); sav.add(mn,-j);
        }
        now.add(a[i],1);
        s+=a[i];
        cout<<ans<<' ';
    }
    return 0;
}