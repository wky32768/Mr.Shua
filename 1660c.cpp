#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n;
int f[N][30]; //计算到i位, 前一个奇数位是j(0表示没有, 可以任意)
char ch[N];
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s", ch+1);
        n=strlen(ch+1);
        // memset(f, 0x3f3f3f3f, sizeof f);
        For(i,0,n) For(j,0,26) f[i][j]=0x3f3f3f3f;
        f[0][0]=0;
        For(i,1,n) {
            //用新奇数
            f[i][ch[i]-'a'+1]=min(f[i][ch[i]-'a'+1], f[i-1][0]); 
            //补一样的偶数
            f[i][0]=min(f[i][0], f[i-1][ch[i]-'a'+1]);
            //删除此位
            For(j,0,26) f[i][j]=min(f[i][j], f[i-1][j]+1);
        }
        cout<<f[n][0]<<'\n';
    }
    return 0;
}