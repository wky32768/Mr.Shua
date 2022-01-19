#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1005;
int t,n,a[N];
int gcd(int a,int b) {
	if(a<b) swap(a,b);
	if(a%b==0) return b;
	return gcd(b,a%b);	
}
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		For(i,1,n) cin>>a[i];
		int gcd1=a[1],gcd2=a[2];
		For(i,1,n) {
			if(i%2==1) gcd1=gcd(gcd1,a[i]);
			else if(i%2==0) gcd2=gcd(gcd2,a[i]);	
		}
		bool ok=1;
		for(int i=2;i<=n;i+=2) if(a[i]%gcd1==0) ok=0;
		if(ok==1) {cout<<gcd1<<'\n';continue;}
		ok=1;
		for(int i=1;i<=n;i+=2) if(a[i]%gcd2==0) ok=0;
		if(ok==1) {cout<<gcd2<<'\n';continue;}
		puts("0");
	}
	return 0;
}

