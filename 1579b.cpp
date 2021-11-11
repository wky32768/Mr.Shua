#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t,n,a[N],at[N],ans[N][4],cnt,b[N];
struct node {
    int c,at;
    friend bool operator < (node a,node b) {return a.c<b.c;}
} aa[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) {
            cin>>aa[i].c;
            aa[i].at=i;
        }
        sort(aa+1,aa+n+1);
        For(i,1,n) {
            a[aa[i].at]=i;
            at[i]=aa[i].at;
        }
        cnt=0;
        memset(ans,0,sizeof ans);
        For(i,1,n-1) if(at[i]!=i) {
            cnt++;
            ans[cnt][1]=i;
            ans[cnt][2]=at[i];
            ans[cnt][3]=at[i]-i;
            For(j,i,at[i]) b[i+(j-i-(at[i]-i)+(at[i]-i+1))%(at[i]-i+1)]=a[j];
            For(j,i,at[i]) a[j]=b[j];
            For(j,1,n) at[a[j]]=j;
        }
        cout<<cnt<<'\n';
        For(i,1,cnt) {
            For(j,1,3) cout<<ans[i][j]<<" ";
            puts("");
        }
    }
    return 0;
}