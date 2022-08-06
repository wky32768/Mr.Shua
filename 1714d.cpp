#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=205;
int t, n, ans1[N], ans2[N];
char ch[N];
struct node {
    int n, id;
    char c[N];
    friend bool operator < (node a, node b) {
        return a.n<b.n;
    }
} a[N];
bool ok(int x, int y) {
    for(int i=x;i<=x+a[y].n-1;i++) if(ch[i]!=a[y].c[i-x+1])
        return false;
    return true;
}
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s", ch+1);
        int nn=strlen(ch+1);
        cin>>n;
        For(i,1,n) {
            scanf("%s", a[i].c+1);
            a[i].n=strlen(a[i].c+1);
            a[i].id=i;
        }   
        sort(a+1,a+n+1);
        int st=1, okk=1, tot=0;
        while(st<=nn) {
            for(int ed=nn+1;ed>=1;ed--)
                for(int j=1;j<=n;j++) 
                    if(ed-a[j].n>=1 && ed-a[j].n<=st) {
                        int i=ed-a[j].n;
                        if(i+a[j].n>st && ok(i,j)==1) {
                            // cout<<"debug "<<a[j].id<<" "<<i<<'\n';
                            st=i+a[j].n;
                            ans1[++tot]=a[j].id; ans2[tot]=i;
                            goto L1;
                        }
                    }
            okk=0;
            break;
            L1:;
        }
        if(okk==0) puts("-1");
        else {
            cout<<tot<<'\n';
            For(i,1,tot) cout<<ans1[i]<<" "<<ans2[i]<<'\n';
        }
    }
    return 0;
}
