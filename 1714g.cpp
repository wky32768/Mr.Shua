#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t, n, cnt, x;
int head[N], a[N], b[N], ans[N];
bool vis[N];
vector <int> v;
struct node {
    int next, to, aa, bb;
} sxd[N];
void add(int x, int y, int aa, int bb) {
    sxd[++cnt].next=head[x];
    sxd[cnt].to=y;
    sxd[cnt].aa=aa; sxd[cnt].bb=bb;
    head[x]=cnt;
}
void dfs(int x, int suma, int sumb) {
    vis[x]=1;
    v.push_back(sumb);
    // For(i,0,v.size()-1) cout<<v[i]<<" ";
    // puts("");
    // cout<<"suma="<<suma<<endl;
    int temp=upper_bound(v.begin(), v.end(), suma)-v.begin();
    ans[x]=temp-1;
    // cout<<"debug "<<x<<" "<<ans[x]<<'\n';
    for(int i=head[x];i;i=sxd[i].next) {
        if(!vis[sxd[i].to]) dfs(sxd[i].to, suma+sxd[i].aa, sumb+sxd[i].bb);
    }
    v.pop_back();
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        cnt=0;
        memset(head, 0, sizeof head);
        memset(vis, 0, sizeof vis);
        For(i,2,n) {
            cin>>x>>a[i]>>b[i];
            add(i, x, a[i], b[i]), add(x, i, a[i], b[i]);
        }
        dfs(1, 0, 0);
        For(i,2,n) cout<<ans[i]<<" ";
        puts("");
    }
    return 0;
}