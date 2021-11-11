#include <bits/stdc++.h>
using namespace std;
const int N=500005;
int t,n,x,y,cnt,ans[N][3];
struct node {
    int c,at;
    friend bool operator < (node a,node b) {
        return a.c<b.c;
    }
};
priority_queue <node> q;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        cnt=0;
        while(!q.empty()) q.pop();
        for(int i=1;i<=n;i++) {
            cin>>x;
            if(x) q.push((node) {x,i});
        }
        while(q.size()>1) {
            node a=q.top(); q.pop();
            node b=q.top(); q.pop();
            ans[++cnt][1]=a.at;
            ans[cnt][2]=b.at;
            a.c--; b.c--;
            if(a.c) q.push(a); 
            if(b.c) q.push(b);
        }
        cout<<cnt<<'\n';
        for(int i=1;i<=cnt;i++) {
            cout<<ans[i][1]<<" "<<ans[i][2]<<'\n';
        }
    }
    return 0;
}