#include <bits/stdc++.h>
using namespace std;
const int N=200005;
int t;
char a[N],b[N];
bool equ(int x,int y,int xx,int yy) {
    for(int i=1;i<=y-x+1;i++)   
        if(b[x+i-1]!=a[xx+i-1]) return 0;
    return 1;
}
bool equ2(int x,int y,int xx,int yy) {
    for(int i=1;i<=y-x+1;i++)   
        if(b[x+i-1]!=a[yy-i+1]) return 0;
    return 1;
}
void solve() {
    // cout<<strlen(a+1)<<" "<<strlen(b+1)<<'\n';
    if(strlen(b+1)==1) {
        for(int j=1;j<=strlen(a+1);j++)
            if(a[j]==b[1]) {puts("YES"); return;}
        puts("NO"); return;
    }
    for(int i=2;i<=strlen(b+1);i++) { //从i到结束都是向左
         for(int j=1;j<=strlen(a+1);j++) {
            // cout<<"First 1 "<<i-1<<" "<<j<<" "<<j+i-2<<'\n';
            if(equ(1,i-1,j,j+i-2)) {
                // cout<<"Second "<<i<<" "<<strlen(b+1)<<" "<<j+i-1-(strlen(b+1)-i)<<" "<<j+i-1<<'\n';
                if(equ2(i,strlen(b+1),j+i-1-(strlen(b+1)-i),j+i-1)) {
                    puts("YES"); return;               
                }
            }
        }
    }
    for(int i=strlen(a+1);i>=1;i--) {
        if(equ2(1,strlen(b+1),i-strlen(b+1)+1,i)) {
            puts("YES"); return;
        }
    }
    puts("NO");
    return;
}
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s",a+1); scanf("%s",b+1);
        solve();
    }
    return 0;
}