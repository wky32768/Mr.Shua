#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t,n,m,need[N];
struct node {
    bool ok;
    int u,v,w,bi[31];
} a[N];
int fa[N],rk[N];
int find(int x) {
    if(fa[x]==x) return x;
    else return fa[x]=find(fa[x]);
}
void merge(int x,int y) {
    int xx=find(x),yy=find(y);
    if(rk[xx]<rk[yy]) fa[xx]=yy,rk[yy]=max(rk[yy],rk[xx]+1);
    else fa[yy]=xx,rk[xx]=max(rk[xx],rk[yy]+1);
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,m) {a[i].ok=1; memset(a[i].bi,0,sizeof a[i].bi);}
        For(i,1,m) {
            cin>>a[i].u>>a[i].v>>a[i].w;
            int temp=-1;
            while(a[i].w) {
                a[i].bi[++temp]=a[i].w%2;
                // cout<<"debug "<<a[i].w%2<<'\n';
                a[i].w/=2;
            }
        }
        memset(need,0,sizeof need);
        for(int i=30;i>=0;i--) {
            int sum=0; //合并的总次数
            For(j,1,n) fa[j]=j,rk[j]=1;
            For(j,1,m) if(a[j].ok==1 && a[j].bi[i]==0) {
                // cout<<"j="<<j<<'\n';
                if(find(a[j].u)!=find(a[j].v)) {
                    merge(a[j].u,a[j].v); sum++;
                }
            }
            // cout<<"sum="<<sum<<'\n';
            if(sum>=n-1) { //全部用0也可以做到,那为1的就不能再用了
                For(j,1,m) if(a[j].ok==1 && a[j].bi[i]==1)
                    a[j].ok=0;
            } else { //不行 只能开1
                need[i]=1;
            }
        }
        int ans=0;
        For(i,0,30) ans+=need[i]*pow(2,i);
        cout<<ans<<'\n';
    }
    return 0;
}