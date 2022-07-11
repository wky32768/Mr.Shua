#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=500005;
int t, n, a[N], b[N];
map <int, bool> mp;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        if(n==3) {
            if(a[1]+a[2]==0 || a[1]+a[3]==0 || a[2]+a[3]==0) puts("YES");
            else puts("NO");
            continue;
        }
        mp.clear();
        int zheng=0, fu=0;
        For(i,1,n) if(a[i]>0) zheng++; else if(a[i]<0) fu++;
        if(zheng>=3 || fu>=3) {puts("NO"); continue;}
        int cnt=0;
        For(i,1,n) if(a[i]) {b[++cnt]=a[i]; mp[a[i]]=1;}
        if(zheng+fu<n) {b[++cnt]=0; mp[0]=1;}
        int ok=1;
        For(i,1,cnt) For(j,i+1,cnt) For(k,j+1,cnt) {
            if(mp[b[i]+b[j]+b[k]]!=1) {ok=0;goto L1;}
        }
        L1:;
        puts(ok==1?"YES":"NO");
    }
    return 0;
}