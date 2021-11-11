//f[i][j][k][l]:计算到第i个数字，红色的余数j，黑色的余数k，目前的红色数m
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const short N=41;
short t,n,x,y,a[N];
char ch[N];
struct node {
    bool val;
    short ans[N];//1红，2黑
} f[N][N][N][N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>x>>y;
        scanf("%s",ch+1);
        For(i,1,n) a[i]=ch[i]-'0';
        memset(f,0,sizeof f);
        f[0][0][0][0].val=1;
        For(i,1,n) For(j,0,x-1) For(k,0,y-1) For(m,0,i-1) {
            if(f[i-1][j][k][m].val==1) {
                f[i][(j*10+a[i])%x][k][m+1].val=1;
                For(l,1,i-1) f[i][(j*10+a[i])%x][k][m+1].ans[l]=f[i-1][j][k][m].ans[l];
                f[i][(j*10+a[i])%x][k][m+1].ans[i]=1;
                f[i][j][(k*10+a[i])%y][m].val=1;
                For(l,1,i-1) f[i][j][(k*10+a[i])%y][m].ans[l]=f[i-1][j][k][m].ans[l];
                f[i][j][(k*10+a[i])%y][m].ans[i]=2;
            }
        }
        bool flag=0;
        for(int i=(n+1)/2;i>=1;i--) {
            if(f[n][0][0][i].ans[1]!=0) {
                flag=1;
                For(j,1,n) if(f[n][0][0][i].ans[j]==1) cout<<"R"; else cout<<"B";
                puts("");
                break;
            }
            if(f[n][0][0][n-i].ans[1]!=0) {
                flag=1;
                For(j,1,n) if(f[n][0][0][n-i].ans[j]==1) cout<<"R"; else cout<<"B";
                puts("");
                break;
            }
        }
        if(flag==0) puts("-1");
    }
    return 0;
}