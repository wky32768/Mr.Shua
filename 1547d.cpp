#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=500005;
int t, n, a[N], ans[N];
//quick read
int read() {
    int x=0,f=1;
    char ch=getchar();
    while(ch<'0'||ch>'9') {if(ch=='-')f=-1;ch=getchar();}
    while(ch>='0'&&ch<='9'){x=x*10+ch-'0';ch=getchar();}
    return x*f;
}
//quick write
void write(int x) {
    if(x<0)putchar('-'),x=-x;
    if(x>9)write(x/10);
    putchar(x%10+'0');
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) a[i]=read();
        int now=a[1];
        For(i,2,n) {
            ans[i]=(now|a[i])^a[i];
            now|=a[i];
        }
        For(i,1,n) {
            write(ans[i]); putchar(' ');
        }
        puts("");
    }
    return 0;
}