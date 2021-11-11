#include <bits/stdc++.h>
using namespace std;
int t,n,ans,a[100005];
char ch[100005];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        scanf("%s",ch+1);
        memset(a,0,sizeof a);
        for(int i=1;i<=n;i++) a[i]=ch[i]-'a';
        sort(a+1,a+n+1);
        ans=0;
        for(int i=1;i<=n;i++)
            if(ch[i]-'a'!=a[i]) ans++;
        cout<<ans<<'\n';
    }
    return 0;
}