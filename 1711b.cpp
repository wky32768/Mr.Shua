#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, m, a[N], du[N];
struct node {int x, y;} s[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,n) cin>>a[i];
        memset(du, 0, sizeof du);
        For(i,1,m) {
            cin>>s[i].x>>s[i].y;
            du[s[i].x]++; du[s[i].y]++;
        }
        if(m%2==0) {puts("0"); continue;}
        int ji=0, ou=0;
        For(i,1,n) if(du[i]%2==1) ji++; else ou++;
        int mn1=0x3f3f3f3f, mn2=0x3f3f3f3f;
        For(i,1,n) if(du[i]%2==1 && a[i]<mn1) mn1=a[i];
        int mn20x3f3f3f3f;
        For(i,1,m) if(a[s[i].x]+a[s[i].y]<mn2) mn2=a[s[i].x]+a[s[i].y];
        cout<<min(mn1, mn2)<<'\n';
    }
    return 0;
}