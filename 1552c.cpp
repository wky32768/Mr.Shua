#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
#define fi first
#define se second
using namespace std;
const int N=10005;
int t,n,k,ans,rest[N];
pair <int,int> a[N];
bool vis[N];
int inter(int x,int y) { 
    if(a[x].fi<a[y].fi && a[y].fi<a[x].se && a[x].se<a[y].se) return 1;
    else if(a[y].fi<a[x].fi && a[x].fi<a[y].se && a[y].se<a[x].se) return 1;
    else return 0;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        memset(vis,0,sizeof vis);
        For(i,1,k) {
            cin>>a[i].fi>>a[i].se;
            if(a[i].fi>a[i].se) swap(a[i].fi,a[i].se);
            vis[a[i].fi]=1;
            vis[a[i].se]=1;
        }
        memset(rest,0,sizeof rest);
        int cnt=0,now=k;
        For(i,1,n*2) if(!vis[i]) rest[++cnt]=i;
        For(i,1,cnt/2) a[++now]=make_pair(rest[i],rest[i+cnt/2]);
        ans=0;
        For(i,1,n) For(j,i+1,n) ans+=inter(i,j);
        cout<<ans<<'\n';
    }
    return 0;
}