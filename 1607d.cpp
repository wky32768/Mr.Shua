#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t,n;
char ch[N];
struct node {
    int v,at;
    friend bool operator < (node a,node b) {
        if(ch[a.at]!=ch[b.at]) return ch[a.at]<ch[b.at];
        else return a.v<b.v;
    }
} a[N];
int read() {
    int f=1,x=0;
    char ch=getchar();
    while(!(ch>='0' && ch<='9')) {
        if(ch=='-') f=-1;
        ch=getchar();
    }
    while(ch>='0' && ch<='9') {
        x=x*10+ch-'0';
        ch=getchar();
    }
    return f*x;
}
signed main() {
//	freopen("1607d.in","r",stdin);
//	freopen("1607d.out","w",stdout);
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) {a[i].v=read();a[i].at=i;}
        scanf("%s",ch+1);
        sort(a+1,a+n+1);
        bool flag=1;
        For(i,1,n) {
            bool ok=0;
//            cout<<"debug "<<ch[a[i].at]<<" "<<a[i].v<<'\n';
            if(ch[a[i].at]=='B' && i<=a[i].v) ok=1;
            if(ch[a[i].at]=='R' && i>=a[i].v) ok=1;
            if(ok==0) {flag=0;break;} 
        }
        if(flag==1) puts("YES"); else puts("NO");
    }
    return 0;
}
