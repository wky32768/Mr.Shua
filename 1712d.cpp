#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, k, a[N], b[N];
bool ok(int x) { // if ans>=x
    For(i,1,n) b[i]=a[i];
    int rest=k, mx=0, temp=k;
    For(i,1,n) if(b[i]*2<x) {temp--; b[i]=1e9;}
    if(temp<0) return false; 
    if(temp>1) return true;
    if(temp==0) {
        For(i,1,n-1)  mx=max(mx, min(b[i], b[i+1]));
        return mx>=x;
    } else if(temp==1) {
        For(i,1,n) mx=max(mx, b[i]);
        return mx>=x;
    }
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        For(i,1,n) cin>>a[i];
        int l=0, r=1e9, ans=0; 
        while(l<=r) {
            int mid=(l+r)>>1;
            // cout<<"debug "<<mid<<" "<<ok(mid)<<endl;
            if(ok(mid)) ans=mid, l=mid+1;
            else r=mid-1;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
