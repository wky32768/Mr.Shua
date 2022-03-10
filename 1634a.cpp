#include <bits/stdc++.h>
using namespace std;
const int N=100005;
int t, n, m;
char ch[N];
signed main() {
	cin>>t;
	while(t--) {
		cin>>n>>m;
		scanf("%s", ch+1);
		bool hui=1;
		for(int i=1;i<=n;i++) if(ch[i]!=ch[n-i+1]) {
			hui=0; break;
		}	
		if(hui==0 && m>=1) puts("2");
		else puts("1");
	}
	return 0;
}
