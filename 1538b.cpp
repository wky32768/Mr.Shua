#include <bits/stdc++.h>
using namespace std;
const int N=500005;
int t,n,a[N],ans,tot;
bool same;
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		same=true,tot=0,ans=0;
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			if(i>1 && a[i-1]!=a[i]) same=false;
			tot+=a[i];
		}
		if(same==1) {puts("0");continue;}
		if(tot%n) {puts("-1");continue;}
		for(int i=1;i<=n;i++) if(a[i]>tot/n) ans++;	
		cout<<ans<<'\n';
	}
	return 0;
}
