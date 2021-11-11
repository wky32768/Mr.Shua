#include <bits/stdc++.h>
using namespace std;
const int N=600005;
int t,times[N];
char ch[N],ans1[N],ans2[N];
bool vis[N],flag;
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s",ch+1);
        memset(vis,0,sizeof vis);
        memset(times,0,sizeof times);
        flag=true;
        int cnt1=0,cnt2=0,n=strlen(ch+1),tot=0;
        for(int i=1;i<=n;i++) times[ch[i]-'a']++;
        for(int i=n;i>=1;i--) if(vis[ch[i]-'a']==0) {
            vis[ch[i]-'a']=1;
            ans2[++cnt2]=ch[i];
        }
        for(int i=cnt2;i>=1;i--) {
			tot+=times[ans2[i]-'a']/(cnt2+1-i);
			if(times[ans2[i]-'a']%(cnt2+1-i)) {puts("-1"); flag=false;break;}
		}
//		cout<<"tot="<<tot<<'\n';
        memset(vis,0,sizeof vis);
        int at=tot+1,k=0;
        while(at<=n && flag) {
            vis[ans2[cnt2-k]-'a']=1;
//            cout<<"nope "<<ans2[cn2-k]<<'\n';
//            cout<<"at="<<at<<'\n';
            for(int i=1;i<=tot;i++) if(vis[ch[i]-'a']==0) {
//            	cout<<"debug "<<ch[at]<<" "<<ch[i]<<'\n';
                if(ch[at]==ch[i]) at++;
                else {
                    if(flag) puts("-1");
                    flag=false;
                }
            }
            k++;
        }
        if(flag) {
			for(int i=1;i<=tot;i++) cout<<ch[i];
        	cout<<" ";
        	for(int i=cnt2;i>=1;i--) cout<<ans2[i];
        	puts("");
        }
    }
    return 0;
}
