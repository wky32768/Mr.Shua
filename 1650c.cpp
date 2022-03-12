#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, m;
struct node {
    int at, w, id;
} x[N];
bool cmp(node a, node b) {return a.w<b.w;}
bool cmp2(node a, node b) {return a.at<b.at;}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        For(i,1,m) {cin>>x[i].at>>x[i].w; x[i].id=i;}
        sort(x+1, x+m+1, cmp);
        int tot=0;
        For(i,1,2*n) tot+=x[i].w;
        sort(x+1, x+2*n+1, cmp2);
        cout<<tot<<'\n';
        for(int i=1,j=2*n;i<=j;i++,j--) cout<<x[i].id<<" "<<x[j].id<<'\n';
        puts("");
    }
    return 0;
}