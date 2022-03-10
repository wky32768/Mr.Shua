#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t, n, x, y, a[N];
signed main() {
	cin>>t;
	while(t--) {
		cin>>n>>x>>y;
		int s=0;
		For(i,1,n) {
			cin>>a[i];
			s=(s+a[i])%2;
		}
		if((x+s)%2==y%2) puts("Alice");
		else puts("Bob");
	}
	return 0;
}

