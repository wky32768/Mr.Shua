//考虑奇数和偶数都可以通过长度2或长度3拼出来,然后DP
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1005;
int t,n,m;
bool f[N];
char ch[N][N],now[N];
struct bk {
    int l,r,id;
} two[10][10],three[10][10][10]; //存储这2/3位的对应字串
vector <bk> ans;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,n) scanf("%s",ch[i]+1);
        memset(two,0,sizeof two);
        memset(three,0,sizeof three);
        memset(f,0,sizeof f);
        For(i,1,n) For(j,1,m) {
            if(j+1<=m) two[ch[i][j]-'0'][ch[i][j+1]-'0']=(bk) {j,j+1,i};
            if(j+2<=m) three[ch[i][j]-'0'][ch[i][j+1]-'0'][ch[i][j+2]-'0']=(bk) {j,j+2,i};
        } //初始化
        f[0]=1;
        scanf("%s",now+1);
        For(i,1,m) {
            if(f[i-2]==1 && two[now[i-1]-'0'][now[i]-'0'].l) f[i]=1;
            if(f[i-3]==1 && three[now[i-2]-'0'][now[i-1]-'0'][now[i]-'0'].l) f[i]=1;
        }
        if(f[m]!=1) puts("-1");
        else {
            ans.clear();
            int at=m;
            while(at) {
                if(f[at-2]==1 && two[now[at-1]-'0'][now[at]-'0'].l) {
                    ans.push_back(two[now[at-1]-'0'][now[at]-'0']); at-=2;
                }
                if(f[at-3]==1 && three[now[at-2]-'0'][now[at-1]-'0'][now[at]-'0'].l) {
                    ans.push_back(three[now[at-2]-'0'][now[at-1]-'0'][now[at]-'0']); at-=3;
                }
            }
            cout<<ans.size()<<'\n';
            for(int i=ans.size()-1;i>=0;i--) cout<<ans[i].l<<" "<<ans[i].r<<" "<<ans[i].id<<'\n';
        }
    }
    return 0;
}