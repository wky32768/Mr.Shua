#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1000005;
int t,n,d,mx;
struct node {
    int v,s;
} a[N];
queue <int> q;
signed main() {
    cin>>t;
    while(t--) {
        memset(a,0,sizeof a);
        cin>>n>>d;
        For(i,0,n-1) cin>>a[i].v;
        while(!q.empty()) q.pop();
        mx=0;
        For(i,0,n-1) if(a[i].v==0 && a[(i-d+n)%n].v==1) {
            q.push(i);
        }
        while(!q.empty()) {
            int now=q.front();
            q.pop();
            if(a[(now-d+n)%n].v==1) {
                a[(now-d+n)%n]=(node) {0,a[now].s+1};
                q.push((now-d+n)%n);
                mx=max(mx,a[now].s+1);
            }
        }
        bool flag=1;
        For(i,0,n-1) if(a[i].v==1) flag=0;
        if(flag==1) cout<<mx<<'\n'; else puts("-1");
    }
    return 0;
}