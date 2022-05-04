#include <bits/stdc++.h>
#define int long long 
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, a[N], b[N], aa, bb;
multiset <int> q;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        For(i,1,n) cin>>b[i];
        q.clear();
        aa=n, bb=n;
        while(aa) {
            // cout<<"debug "<<aa<<" "<<bb<<'\n';
            if(a[aa]==b[bb]) {aa--; bb--;}
            else {
                while(b[bb+1]==b[bb]) {
                    q.insert(b[bb]);
                    bb--;
                }
                if(b[bb]==a[aa]) {aa--; bb--;}
                else {
                    multiset <int> :: iterator ff=q.find(a[aa]);
                    if(ff==q.end()) {
                        puts("NO");
                        goto L1;
                    } else {
                        q.erase(ff);
                        aa--;
                    }
                }
            }
        }
        if(aa==0) puts("YES");
        L1:;
        For(i,1,n) a[i]=0;
        For(i,1,n) b[i]=0;
    }
    return 0;
}