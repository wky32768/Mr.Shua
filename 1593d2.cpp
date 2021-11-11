#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=105;
int t,n,a[N],all[2000005];
bool vis[2000005];
map <int,int> mp;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        mp.clear();
        int mx=0,x=1e6,y=-1e6;
        For(i,1,n) {
            cin>>a[i];
            if(a[i]<x) x=a[i];
            if(a[i]>y) y=a[i];
            mp[a[i]]++;
            if(mp[a[i]]>mx) mx=mp[a[i]];
        }
        if(mx>=n/2) {puts("-1");continue;}
        int ans=1,hh=0;
        memset(vis,0,sizeof vis);
        For(i,1,n) For(j,i+1,n) {
            if(!vis[abs(a[i]-a[j])]) {all[++hh]=abs(a[i]-a[j]); vis[abs(a[i]-a[j])]=1;}
            For(k,2,sqrt(abs(a[i]-a[j]))) if(abs(a[i]-a[j])%k==0) {
				if(!vis[k]) {all[++hh]=k; vis[k]=1;}
				if(!vis[abs(a[i]-a[j])/k]) {all[++hh]=abs(a[i]-a[j])/k; vis[abs(a[i]-a[j])/k]=1;}
			}
        }
        For(i,1,n) {//设置基准值
            For(k,1,hh) if(all[k]>ans) {
                int tot=0;
                For(j,1,n) {
                    if(abs(a[i]-a[j])%all[k]==0) tot++;
                }
                if(tot>=n/2) ans=all[k];
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
