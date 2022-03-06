#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
const int N=100005;
using namespace std;
int t,n;
struct node {
	int a,b,id;
	friend bool operator < (node x,node y) {
		return x.a>y.a;
	}
} p[N];
bool ok[N];
#define lowbit(x) (x&(-x))
int h[N<<4];
void upd(int x) {
	while(x<=n) {
		h[x]=p[x].b;
		for(int i=1;i<lowbit(x);i<<=1) 
			h[x]=max(h[x],h[x-i]);
		x+=lowbit(x);
	}
	return;
}
int mx(int l,int r) {
	int ans=0;
	while(r>=l) {
		ans=max(ans,p[r].b);
		r--;
		for(;r-lowbit(r)>=l;r-=lowbit(r))
			ans=max(ans,h[r]);
	}
	return ans;
}
signed main() {
	cin>>t;
	while(t--) {
		cin>>n;
		For(i,1,n) p[i].id=i,ok[i]=1;
		For(i,1,n) cin>>p[i].a;
		For(i,1,n) cin>>p[i].b;
		sort(p+1,p+n+1);
		For(i,1,n) {
//			cout<<p[i].b<<'\n';
			upd(i);
		}
		For(i,2,n) {
//			cout<<mx(1,i-1)<<" "<<mx(i,n)<<'\n';
			if(mx(1,i-1)>mx(i,n)) ok[p[i].id]=0;
		}
		For(i,1,n) cout<<ok[i];
		puts("");
		For(i,1,n<<4) h[i]=0;
	}
	return 0;
}

