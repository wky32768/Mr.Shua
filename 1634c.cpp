#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t,n,k;
signed main() {
	cin>>t;
	while(t--) {
		cin>>n>>k;
		if(k==1) {puts("YES"); For(i,1,n) cout<<i<<'\n';}
		else if(n%2==1) puts("NO");
		else {
			puts("YES");
			For(i,1,n) {
				for(int j=i,tot=1;tot<=k;j+=n,tot++) cout<<j<<" ";
				puts("");	
			}
		}	
	}
	return 0;
}

