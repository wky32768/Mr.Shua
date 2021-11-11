#include <bits/stdc++.h>
using namespace std;
int t,x,y,ans;
char ch[12];
void dfs(int now,int x,int y) {
	if(now==10) return;
	if(ch[now]=='1') {
		if(now%2==1) x++; else y++;
		if(4-(now-1)/2+x<y or 5-now/2+y<x) {
			ans=min(ans,now); return;	
		}
		dfs(now+1,x,y);
		if(now%2==1) x--; else y--;
	} else if(ch[now]=='0') {
		if(4-(now-1)/2+x<y or 5-now/2+y<x) {
			ans=min(ans,now); return;	
		}	
		dfs(now+1,x,y);
	} else {
		if(4-(now-1)/2+x<y or 5-now/2+y<x) {
			ans=min(ans,now); return;	
		}
		dfs(now+1,x,y);
		if(now%2==1) x++; else y++;
		if(4-(now-1)/2+x<y or 5-now/2+y<x) {
			ans=min(ans,now); return;	
		}
		dfs(now+1,x,y);
		if(now%2==1) x--; else y--;	
	}
}
signed main() {
	cin>>t;
	while(t--) {
		scanf("%s",ch+1);
		ans=10,x=0,y=0;
		dfs(1,0,0);
		cout<<ans<<'\n'; 
	}	
	return 0;
}

