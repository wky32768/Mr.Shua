#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=105;
int t,n,a[N],b[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        For(i,1,n) cin>>b[i];
        sort(a+1,a+n+1); sort(b+1,b+n+1);
        bool flag=1;
        For(i,1,n) if((b[i]-a[i])>1 || b[i]<a[i]) flag=0;
        puts(flag==1?"YES":"NO");
    }
    return 0;
}