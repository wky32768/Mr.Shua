#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t, n;
int a[4]={0, 2, 1, 1};
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%3==0) cout<<n/3<<'\n';
        else if(n%3==2) cout<<(n+1)/3<<'\n';
        else {
            if(n==1) puts("2");
            else cout<<(n+2)/3<<'\n';
        }
    }
    return 0;
}