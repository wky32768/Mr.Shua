#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t,n,a[100005][6],ans;
bool bet(int x,int y) {
    int aa=0,bb=0;
    For(i,1,5) if(a[x][i]<a[y][i]) aa++; else bb++;
    return aa>bb;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) For(j,1,5) cin>>a[i][j];
        int mx=1;
        For(i,2,n) if(bet(i,mx)) mx=i;
        bool t=true;
        For(i,1,n) if(i!=mx) if(bet(i,mx)) t=false;
        if(t==false) puts("-1");
        else cout<<mx<<'\n';
    }
    return 0;
}