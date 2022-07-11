#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t, n, k, x, y;
int a[300005];
map <int, int> early, late;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        early.clear();
        late.clear();
        For(i,1,n) {
            cin>>a[i];
            if(!early.count(a[i])) early[a[i]]=i;
            else early[a[i]]=min(early[a[i]], i);
            late[a[i]]=max(late[a[i]], i);
        }
        For(i,1,k) {
            cin>>x>>y;
            if(!early.count(x) || !late.count(y)) puts("NO");
            else if(early[x]<late[y]) puts("YES");
            else puts("NO");
        }
    }
    return 0;
}