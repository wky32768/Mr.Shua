#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int t;
char a[N],b[N];
void solve() {
    int na=strlen(a+1),nb=strlen(b+1),at=0;
    for(int i=na;i>=1;i-=2) if(a[i]==b[nb]) {at=i;break;}
    if(at==0) {puts("NO");return;}
    int now=nb-1,cnt=at-1;
    while(now>0 && cnt>0) {
        if(a[cnt]==b[now]) {
            now--; cnt--;
        } else cnt-=2;
    }
    if(now==0) {puts("YES"); return;}
    puts("NO");
}

signed main() {
    cin>>t;
    while(t--) {
        scanf("%s",a+1); scanf("%s",b+1);
        solve();
    }
    return 0;
}