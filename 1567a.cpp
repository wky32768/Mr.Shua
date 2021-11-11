#include <bits/stdc++.h>
using namespace std;
int t,n;
char ch[200005];
bool ok(int x,int y) {
    if(ch[x]=='L' && ch[y]=='R') return 1;
    if(ch[x]=='R' && ch[y]=='L') return 1;
    if(ch[x]=='U' && ch[y]=='D') return 1;
    if(ch[x]=='D' && ch[y]=='U') return 1;
    return 0;
}
char pa(int x) {
    if(ch[x]=='L') return 'R';
    if(ch[x]=='R') return 'L';
    if(ch[x]=='U') return 'D';
    if(ch[x]=='D') return 'U';
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        scanf("%s",ch+1);
        for(int i=1;i<=n;i++) {
            if(i!=n && ok(i,i+1)) {
                cout<<ch[i]<<ch[i+1];
                i++;
            } else cout<<pa(i);
        }
        puts("");
    }
    return 0;
}