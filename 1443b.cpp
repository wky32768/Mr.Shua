#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=120000;
int t,n,a,b,f[N][2];
char ch[N];
signed main() {
	cin>>t;
	while(t--) {
		cin>>a>>b;
		cin>>ch;
		For(i,0,100001) For(j,0,1) f[i][j]=1e9;
		f[0][0]=0;
		n=strlen(ch);
		For(i,1,n) {
			if(ch[i-1]=='1') {
				f[i][1]=min(f[i-1][1],f[i-1][0]+a);
			} else {
				f[i][0]=min(f[i-1][0],f[i-1][1]);
				f[i][1]=min(f[i-1][1]+b,f[i-1][0]+a+b);
			}
//			cout<<i<<" "<<f[i][0]<<" "<<f[i][1]<<'\n';
		}
		cout<<min(f[n][0],f[n][1])<<'\n';
	}
	return 0;
}
