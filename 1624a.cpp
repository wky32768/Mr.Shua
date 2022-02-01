#include <bits/stdc++.h>
using namespace std;
const int N=10005;
int t,n,a[N];
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		int mn=1e9+5,mx=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			mn=min(a[i],mn); mx=max(a[i],mx);	
		}
		cout<<mx-mn<<'\n';
	}
	return 0;
}
