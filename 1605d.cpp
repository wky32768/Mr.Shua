//https://blog.csdn.net/Sherlock_Holmewei/article/details/121349418
#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t,n,cnt;
int head[N],c[3][N],ans[N];
bool vis[N],used[N];
struct node {
    int next,to;
} sxd[N];
void add(int x,int y) {
    sxd[++cnt].next=head[x];
    sxd[cnt].to=y;
    head[x]=cnt;
}
void dfs(int x,int col) {
//	cout<<"dfs "<<x<<" "<<col<<'\n';
    vis[x]=1;
    c[col][++c[col][0]]=x;
    for(int i=head[x];i;i=sxd[i].next) {
//    	cout<<i<<" "<<"to="<<sxd[i].to<<'\n';
        int to=sxd[i].to;
        if(!vis[to]) dfs(to,3-col);
    }
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        int x=0,y=0;
        cnt=0;
        c[1][0]=c[2][0]=0;
        For(i,1,n-1) {cin>>x>>y; add(x,y); add(y,x);}
        For(i,1,n) if(!vis[i]) dfs(i,1);
        int at=0,now=0,which=0;
        if(c[1][0]<=c[2][0]) {now=c[1][0],which=1;}
        else {now=c[2][0],which=2;}
//        for(int i=1;i<=c[1][0];i++) cout<<c[1][i]<<" ";
//        puts("");
//        for(int i=1;i<=c[2][0];i++) cout<<c[2][i]<<" ";
//        puts("");
//        cout<<"now="<<now<<'\n'; 
        For(i,0,30) if((now>>i)%2==1) {
//        	cout<<"i="<<i<<'\n';
            if(i==0) {
                ans[c[which][++at]]=1;
                used[1]=1;
//                cout<<"debug "<<c[1][at]<<"1"<<'\n';
            }
            if(i!=0) For(j,pow(2,i),min(n,(int)pow(2,i+1)-1)) {
                ans[c[which][++at]]=j;
                used[j]=1;
//                cout<<"debug "<<c[which][at]<<" "<<j<<'\n';
            }
        }
        int cd=0;
        For(i,1,n) if(!used[i]) ans[c[3-which][++cd]]=i;
        For(i,1,n) cout<<ans[i]<<" ";
        puts("");
        For(i,1,min(n<<2,400000)) head[i]=vis[i]=ans[i]=used[i]=0;
    }
    return 0;
}

