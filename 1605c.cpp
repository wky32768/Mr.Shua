//可以发现，满足题意的字串开头与结尾一定都是a
//如果有某两个a之间的字符串满足条件，则对其取min
//O（t*n）
#include <bits/stdc++.h>
using namespace std;
const int N=1000005;
int t,n,ans;
char ch[N];
int cnt,aa[N];
bool ok(int x,int y) {
//    printf("debug %d %d\n",x,y);
    int a=0,b=0,c=0;
    for(int i=x;i<=y;i++) {
        if(ch[i]=='a') a++;
        else if(ch[i]=='b') b++;
        else if(ch[i]=='c') c++;
    }
    if(a>b && a>c) return 1;
    else return 0;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        scanf("%s",ch+1);
        cnt=0; ans=0x3f3f3f3f;
        for(int i=1;i<=n;i++) {
//            printf("ddebug %c\n",ch[i]);
            if(ch[i]=='a') aa[++cnt]=i;
        }
//        printf("debug %d\n",cnt);
        for(int i=2;i<=cnt;i++) if(ok(aa[i-1],aa[i])) {
            ans=min(ans,aa[i]-aa[i-1]+1);
        }
        for(int i=3;i<=cnt;i++) if(ok(aa[i-2],aa[i])) {
        	ans=min(ans,aa[i]-aa[i-2]+1);	
        }
        if(ans<=2000000) cout<<ans<<'\n';
        else puts("-1");
    }
    return 0;
}
