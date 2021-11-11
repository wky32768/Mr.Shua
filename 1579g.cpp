//f[i][j]:到i位且当前距离左端点j时，到右端点的长度
//太难了太难了 动态规划一生之敌
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=10005;
int t,n,a[N],f[N][2005],mx;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        mx=0;
        For(i,1,n) {cin>>a[i]; mx=max(mx,a[i]);}
        For(i,1,n) For(j,0,2*mx) f[i][j]=0x3f3f3f3f;
        f[0][0]=0;
        For(i,0,n-1) For(j,0,2*mx) {
            f[i+1][max(0,j-a[i+1])]=
                min(f[i+1][max(0,j-a[i+1])],f[i][j]+a[i+1]);
            if(j+a[i+1]<=2000) f[i+1][j+a[i+1]]=
                min(f[i+1][j+a[i+1]],max(f[i][j]-a[i+1],0));
        }
        int ans=0x3f3f3f3f;
        For(i,0,2*mx) ans=min(ans,i+f[n][i]);
        cout<<ans<<'\n';
        
    }
    return 0;
}