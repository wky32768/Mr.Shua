#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t, k, n, m;
int a[N], b[N], ans[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>k>>n>>m;
        For(i,1,n) cin>>a[i];
        For(i,1,m) cin>>b[i];
        int at1=1, at2=1, ok=1, cnt=0;
        while(at1<=n || at2<=m) {
            while(a[at1]==0 && at1<=n) {
                ans[++cnt]=a[at1];
                at1++; k++;
            }
            while(b[at2]==0 && at2<=m) {
                ans[++cnt]=b[at2];
                at2++; k++;
            }
            if(at1>n && at2>m) break;
            if(at1>n) {
                if(b[at2]>k) {ok=0;break;}
                else {ans[++cnt]=b[at2]; at2++;}
            } else if(at2>m) {
                if(a[at1]>k) {ok=0;break;}
                else {ans[++cnt]=a[at1]; at1++;}
            } else if(a[at1]<b[at2]) {
                if(a[at1]>k) {ok=0;break;}
                else {ans[++cnt]=a[at1]; at1++;}
            } else {
                if(b[at2]>k) {ok=0;break;}
                else {ans[++cnt]=b[at2]; at2++;}
            }
            // cout<<"debug "<<at1<<" "<<at2<<endl;
        }
        if(ok) {
            For(i,1,cnt) cout<<ans[i]<<" ";
            puts("");
        } else puts("-1");
    }
    return 0;
}