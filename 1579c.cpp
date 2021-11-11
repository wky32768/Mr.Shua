#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=35;
int t,n,m,k,a[N][N];
bool vis[N][N];
char ch[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m>>k;
        memset(vis,0,sizeof vis);
        For(i,1,n) {
            scanf("%s",ch+1);
            For(j,1,m) a[i][j]=(ch[j]=='*'?1:0);
        }
        For(i,1,n) For(j,1,m) if(a[i][j]) {
            // cout<<"ok "<<i<<" "<<j<<'\n'; 
            int h=0;
            while(i-h>=1 && j-h>=1 && j+h<=m && 
            a[i-h][j-h]==1 && a[i-h][j+h]==1) h++;
            // cout<<"h="<<h<<'\n';
            if(h-1>=k) {
                // cout<<"okk "<<h<<'\n';
                For(k,0,h-1) vis[i-k][j-k]=1,vis[i-k][j+k]=1;
            }
        }
        bool flag=1;
        For(i,1,n) For(j,1,m) if(a[i][j]==1 && vis[i][j]==0) flag=0;
        puts(flag==1?"YES":"NO");
    }
    return 0;
}