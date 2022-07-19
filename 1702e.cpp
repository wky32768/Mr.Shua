#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
const int NN=1000005;
int t, n, x, y;
int fa[N], a[NN], b[NN];
vector <int> mp[N];
int find(int x) {
    if(fa[x]==x) return x;
    else return fa[x]=find(fa[x]);
}
void merge(int xx, int yy) {
    int xxx=find(xx), yyy=find(yy);
    fa[xxx]=yyy;
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) mp[i].clear();
        For(i,1,n)  {
            scanf("%d%d", &x, &y);
            mp[x].push_back(i);
            mp[y].push_back(i);
        }
        For(i,1,2*n) fa[i]=i;
        int cnt=0;
        For(i,1,n) if(mp[i].size()) 
            For(j,0,mp[i].size()-1)
                For(k,j+1,mp[i].size()-1) {
                    a[++cnt]=mp[i][j];
                    b[cnt]=mp[i][k];
                    int xx=find(a[cnt]);
            		int yy=find(b[cnt]);
            		if(xx==yy) {puts("NO"); goto L1;}
            		merge(a[cnt], b[cnt]+n);
            		merge(a[cnt]+n, b[cnt]);
                }
        puts("YES");
        L1:;
    }
    return 0;
}
