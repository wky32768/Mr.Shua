 #include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t,n,a[1005],one[1005],nxt[1005];
char ans[105][105],ch[1005];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        scanf("%s",ch+1);
        int ones=0,at=0,mx=n,mn=1;
        For(i,1,n){
            a[i]=ch[i]-'0';
            if(a[i]==1) ones++,at=i;
        }
        memset(nxt,0,sizeof nxt);
        if(n-ones==1) {puts("NO");continue;}
        if(n-ones>=2) {
            For(i,1,n) {
            int now=i+1;
            if(now==n+1) now=1;
            while(a[now]==1) {
                now++;
                if(now==n+1) now=1;
            }
            nxt[i]=now;
        }
        For(i,1,n) ans[i][i]='X';

        if(ones>=2) {
            //选1的人遇到所有人都是平局
            //剩下的2号人循环赢一场
            puts("YES");
            For(i,1,n) For(j,1,n) {
                if(a[i]==1 || a[j]==1) ans[i][j]='=';
                else if(nxt[i]==j) ans[i][j]='-';
                else if(nxt[j]==i) ans[i][j]='+';
                else ans[i][j]='=';
            }
        } else if(ones==1) {
            puts("YES");
            For(i,1,n) For(j,1,n) {
                if(a[i]==1 || a[j]==1) ans[i][j]='=';
                else if(nxt[i]==j) ans[i][j]='-';
                else if(nxt[j]==i) ans[i][j]='+';
                else ans[i][j]='=';
            }
        } else {
            For(i,1,n) For(j,1,n) {
                if(a[i]==1 || a[j]==1) ans[i][j]='=';
                else if(nxt[i]==j) ans[i][j]='-';
                else if(nxt[j]==i) ans[i][j]='+';
                else ans[i][j]='=';
            }
        }
        For(i,1,n) {
            For(j,1,n) cout<<ans[i][j];
            puts("");
        }
    }
    return 0;
}