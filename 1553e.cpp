#include <bits/stdc++.h>
#define For(i,a,b) for(register int i=a;i<=b;i++)
#define gc getchar
#define pc putchar
using namespace std;
const int N=300005;
int t,a[N],n,k,ans[N],h;
inline int read() {
    int f=1,x=0;
    char ch=gc();
    while(!(ch>='0' && ch<='9')) {if(ch=='-') f=-1;ch=gc();}
    while(ch>='0' && ch<='9') {x=x*10+ch-'0';ch=gc();}
    return x*f;
}
inline void write(int x) {
    if(x<0) pc('-'),x=-x;
    if(x>=10) write(x/10);
    pc('0'+x%10);
    return;
}    
inline int sum(int x) {
    vector <bool> vis(n);
    vector <int> b;
    h=0;
    b.push_back(-1);
    For(i,n-x+1,n) b.push_back(i);
    For(i,1,n-x) b.push_back(i);
    For(i,1,n) {
        if(vis[i]) continue;
        if(a[i]==b[i]) vis[i]=1;
        else {
            int now=i;
            while(vis[now]==0) {
                h++;
                vis[now]=1;
                now=(a[now]+x-1)%n+1;
            }
            h--;
        }
    }
    return h;
}
signed main() {
    t=read();
    while(t--) {
        n=read(),k=read();
		vector <int> times(n);
        For(i,1,n) {
            a[i]=read();
            times[(i-a[i]+n)%n]++
			;
        }
        int tot=0;
        For(i,0,n-1) if((n-times[i])/2<=k) {
            if(sum(i)<=k) ans[++tot]=i;
        }
        write(tot); pc(' ');
        For(i,1,tot) {write(ans[i]); pc(' ');}
        puts(""); 
    }
    return 0;
}
