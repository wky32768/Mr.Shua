#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, k, a[N];
bool cmp(int x, int y) {return x>y;}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        For(i,1,n) cin>>a[i];
        sort(a+1,a+k+1,cmp);
        sort(a+k+1,a+n+1);
        int ans=0, at1=1, at2=k+1;
        while(at1<=k&& at2<=n) {
            if(a[at1]>a[at2]) {
                ans++; at1++; at2++;
            } else break;
        }
        cout<<ans<<endl;
    }
    return 0;
}