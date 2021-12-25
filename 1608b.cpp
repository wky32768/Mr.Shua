#include <bits/stdc++.h>
using namespace std;
int t,n,a,b;
int ans[1000005];
signed main() {
	cin>>t;
	while(t--) {
		cin>>n>>a>>b;
		if(abs(a-b)>1 || a+b+2>n) {puts("-1"); continue;}
		if(a>b) {
			int now=n;
			for(int i=2;i<=(b+1)*2;i+=2) {ans[i]=now;now--;}
			for(int i=1;i<=(a+1)*2-1;i+=2) {ans[i]=now;now--;}
			for(int i=a+b+3;i<=n;i++) {ans[i]=now;now--;}
			for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
			puts("");
		} else if(a<b) {
			int now=1;
			for(int i=2;i<=(a+1)*2;i+=2) {ans[i]=now;now++;}
			for(int i=1;i<=(b+1)*2-1;i+=2) {ans[i]=now;now++;}
			for(int i=a+b+3;i<=n;i++) {ans[i]=now;now++;}
			for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
			puts("");
		} else if(a==b) {
			int now=n;
			for(int i=1;i<=a*2+1;i+=2) {ans[i]=now;now--;}
			for(int i=2;i<=b*2;i+=2) {ans[i]=now;now--;}
			for(int i=a*2+2;i<=n;i++) {ans[i]=now;now--;}
			for(int i=1;i<=n;i++) cout<<ans[i]<<' ';

			puts("");
		}
	}
	return 0;
}

