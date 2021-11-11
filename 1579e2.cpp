#include <bits/stdc++.h>
#define int long long
#define lb(x) (x&(-x))
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=800005;
int t,n,a[N],tt[N],f[N];
void add(int x) {
    for(int i=x;i<=N;i+=lb(i)) f[i]++;
}
int query(int x) {
    int ans=0;
    for(int i=x;i;i-=lb(i)) ans+=f[i];
    return ans;
}
signed main() {
    cin>>t;
    while(t--) {
        memset(f,0,sizeof f);
        cin>>n;
        For(i,1,n) {
        	cin>>a[i];
			tt[i]=a[i];	
        }
        sort(tt+1,tt+n+1);
        int m=unique(tt+1,tt+n+1)-tt-1;
        For(i,1,n) a[i]=lower_bound(tt+1,tt+m+1,a[i])-tt;
        int ans=0;
        For(i,1,n) {
            ans+=min(query(a[i]-1ll),(i-1)-query(a[i]));
            add(a[i]);
        }
		cout<<ans<<'\n';
    }
}
//3 5 5 6 7 9
//adding 6
//front->3 back->2
