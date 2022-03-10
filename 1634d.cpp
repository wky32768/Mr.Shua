//神秘的数学(对于任意四个作操作, 结果最大的那两个一定不是0)
#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=10005;
int t, n, not_know, is[N];
int ask(int x,int y,int z) {
    int ans=0;
    cout<<"? "<<x<<" "<<y<<" "<<z<<'\n';
    cin>>ans;
    return ans;
}
void dfs(int x1) {
//    cout<<"dfs "<<x1<<'\n';
    int x2=0, x3=0, x4=0;
    for(int i=x1%n+1;;i=i%n+1) if(is[i]==0) {x2=i;break;}
    for(int i=x2%n+1;;i=i%n+1) if(is[i]==0) {x3=i;break;}
    for(int i=x3%n+1;;i=i%n+1) if(is[i]==0) {x4=i;break;}
//    cout<<"Debug "<<x1<<" "<<x2<<" "<<x3<<" "<<x4<<'\n';
    int y1=ask(x2, x3, x4), y2=ask(x1, x3, x4), y3=ask(x1, x2, x4), y4=ask(x1, x2, x3);
    int mx=max(max(y1, y2), max(y3, y4));
    if(y1==mx) is[x1]=1, not_know--;
    if(y2==mx) is[x2]=1, not_know--;
    if(y3==mx) is[x3]=1, not_know--;
    if(y4==mx) is[x4]=1, not_know--;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        memset(is, 0, sizeof is);
        not_know=n;
        while(not_know>=3)
            For(i,1,n) if(is[i]==0) {
//                cout<<"i="<<i<<'\n';
                while(not_know<4)
                    For(j,1,n) if(is[j]==1) {
                        is[j]=0;
                        not_know++;
                        if(not_know==4) break;
                    }
                dfs(i);
                break;
            }
        cout<<"! ";
        if(not_know<=1) {
			For(i,1,n) if(is[i]==0) cout<<i<<" ";
        	For(i,1,n) if(is[i]==1) {cout<<i<<'\n';break;}
        } else {
        	For(i,1,n) if(is[i]==0) cout<<i<<" ";
        	puts("");
        }	
    }

}
