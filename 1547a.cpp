#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t, n, a[3], b[3], c[3];
signed main() {
    cin>>t;
    while(t--)  {
        cin>>a[1]>>a[2];
        cin>>b[1]>>b[2];
        cin>>c[1]>>c[2];
        int mid=0;
        if(a[1]==b[1] && a[1]==c[1]) {
            if(a[2]<c[2] && c[2]<b[2]) mid=1;
            if(a[2]>c[2] && c[2]>b[2]) mid=1;
        }
        if(a[2]==b[2] && a[2]==c[2]) {
            if(a[1]<c[1] && c[1]<b[1]) mid=1;
            if(a[1]>c[1] && c[1]>b[1]) mid=1;
        }
        if(mid==0) cout<<abs(a[1]-b[1])+abs(a[2]-b[2])<<'\n';
        else cout<<abs(a[1]-b[1])+abs(a[2]-b[2])+2<<'\n';
    }
    return 0;
}
