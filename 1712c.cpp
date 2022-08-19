#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, a[N];
map <int, vector <int> > v;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        v.clear();
        For(i,1,n) v[a[i]].push_back(i);
        int ans=0;
        while(1) {
            int tot=0;
            for(int i=n-1;i>=1;i--) if(a[i]>a[i+1]) {
                ans++; tot++;
                int temp=a[i];
                For(j,0,v[temp].size()-1) if(a[v[temp][j]]) a[v[temp][j]]=0;
            }
            if(!tot) break;
            // puts("cdjw");
            // For(i,1,n) cout<<a[i]<<" ";
            // puts("");
        }
        cout<<ans<<endl;
    }
    return 0;
}