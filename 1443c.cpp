#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
#define int long long
using namespace std;
const int N=500000;
int t,n,a[N],b[N];
struct node {
	int t1,t2;
	bool operator < (const node &a)const{
		if(t1!=a.t1) return t1<a.t1;
		else return t2>a.t2;
	}
};
priority_queue <node> q;
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		while(!q.empty()) q.pop();
		For(i,1,n) cin>>a[i];
		For(i,1,n) cin>>b[i];
		For(i,1,n) q.push((node) {a[i],b[i]});
		int ans=1e9,tot=0;
		while(1) {
			if(q.empty()) break;
			int x=q.top().t1,y=q.top().t2;
			q.pop();
			ans=min(ans,max(tot+y,q.top().t1));
			tot+=y;
			if(tot>q.top().t1) break;
		}
		int last=0;
		For(i,1,n) last=last+b[i];
		ans=min(ans,last);
		int mx=0;
		For(i,1,n) mx=max(mx,a[i]);
		ans=min(ans,mx);
		cout<<ans<<'\n';
	}
	return 0;s
}
