#include <bits/stdc++.h>
using namespace std;
const int N=1005;
int t,n,a[N];
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		int mn=1005,mx=-1,mnat,mxat,ans;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			if(a[i]<mn) mn=a[i],mnat=i;
			if(a[i]>mx) mx=a[i],mxat=i;
		}
		ans=min(
				min(
					max(mnat,mxat), 
					n-min(mnat,mxat)+1
				),
				min(
					mnat+n-mxat+1,
					mxat+n-mnat+1
				)
			);
		cout<<ans<<'\n';
	}
	return 0;
}
