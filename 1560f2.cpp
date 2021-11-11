#include <bits/stdc++.h>
using namespace std;
int t,xx,x,k,a[21],cnt;
bool vis[105];
int tot() {
    memset(vis,0,sizeof vis);
    int n=0;
    for(int i=cnt;i>=1;i--) {
        if(vis[a[i]]==0) {
            vis[a[i]]=1;
            n++;
            if(n>k) return 0;
        }
    }
    return 1;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>xx>>k;
        x=xx;
        cnt=0;
        while(x) {a[++cnt]=x%10; x/=10;}
        int now=0;
        while(tot()==0) {
            memset(vis,0,sizeof vis);
            int n=0;
            for(int i=cnt;i>=1;i--) {
                if(vis[a[i]]==0) {
                    vis[a[i]]=1;
                    n++;
                }
                if(n>k) {now=i;break;}
            }
            // cout<<"now="<<now<<'\n';
            a[now]++; 
            if(a[now]==10) {a[now]=0;a[now+1]++;}
            for(int i=now-1;i>=1;i--) a[i]=0;
            // for(int i=cnt;i>=1;i--) cout<<a[i];
            // puts("");
        }
        for(int i=cnt;i>=1;i--) cout<<a[i];
        puts("");
    }
    return 0;
}