#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=105;
struct node {
	char c[2];
} a[N];
int t,n;
char ch[N];
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		For(i,1,n-2) scanf("%s",a[i].c+1);
		int ok=1,at=0;
		For(i,2,n-2)
			if(a[i-1].c[2]!=a[i].c[1]) ok=0,at=i-1;
		if(ok==1) {
			cout<<a[1].c[1];
			For(i,1,n-2) cout<<a[i].c[2];
			cout<<"a\n";
		} else {
			cout<<a[1].c[1];
			For(i,1,at) cout<<a[i].c[2];
			cout<<a[at+1].c[1];
			For(i,at+1,n-2) cout<<a[i].c[2];
			puts("");
		}
	}
	return 0;
}
