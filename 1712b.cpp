#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        if(n%2==0) For(i,1,n) cout<<(i%2==1?i+1:i-1)<<" ";
        else {cout<<"1 ";For(i,2,n) cout<<(i%2==1?i-1:i+1)<<" ";}
        puts("");
    }
    return 0;
}