#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1600005;

int t,x,y,cnt,n,k;
int bs[N],head[N];
int tot,pcs[N],exist[N];
int tot2,pcs2[N];
int in_new[N];

struct node {
    int next,to;
} sxd[N];

void add(int x,int y) {
    sxd[++cnt].next=head[x];
    sxd[cnt].to=y;
    head[x]=cnt;
}

signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        For(i,1,n) exist[i]=1;
        For(i,1,n-1) {
            cin>>x>>y;
            add(x,y),add(y,x);
            bs[x]++,bs[y]++;
        }

        For(i,1,k) {
            if(i==1) {
                tot=0;
                For(j,1,n) if(bs[j]<=1) pcs[++tot]=j;
            } else {
                tot=tot2;
                For(j,1,tot) pcs[j]=pcs2[j];
            }
            tot2=0;
            For(j,1,tot) {
                int at=pcs[j];
                exist[at]=0;
                for(int x=head[at];x;x=sxd[x].next) {
                    int nxt=sxd[x].to;
                    bs[nxt]--;
                    if(bs[nxt]<=1 && in_new[nxt]==0) {
                        pcs2[++tot2]=nxt;
                        in_new[nxt]=1;
                    }
                }
            }
        }
        int ans=0;
        For(i,1,n) if(exist[i]) ans++;
        cout<<ans<<'\n';

        For(i,1,n*4) {
            exist[i]=1;
            head[i]=in_new[i]=bs[i]=0;
        }
        cnt=0;

    }
    return 0;
}