#include <bits/stdc++.h>
using namespace std;
int t,n,a[10005],b[10005],ans[10005];
char s[10005];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        scanf("%s",s+1);
        for(int i=1;i<=n;i++) a[i]=b[i]=(s[i]-'0');    
        sort(b+1,b+n+1);
        int cnt=0;
        for(int i=1;i<=n;i++) if(a[i]!=b[i]) ans[++cnt]=i;
        if(cnt==0) {puts("0");continue;}
        puts("1");
        cout<<cnt<<" ";
        for(int i=1;i<=cnt;i++) cout<<ans[i]<<" ";
        puts("");
    }
    return 0;
}