#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t, n, xx, yy, aa[200005], bb[200005];
struct node {
    int x, y;
};
queue <node> q;
map <int, bool> a, b;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        a.clear(); b.clear();
        while(!q.empty()) q.pop();
        int tot=0, stop=0;
        For(i,1,n) {cin>>aa[i]>>bb[i];}
        For(i,1,n) {
            xx=aa[i], yy=bb[i];
            if(i==1) {
                a[xx]=a[yy]=1;
            } else {
                int oka=1, okb=1;
                if(a[xx]==1 || a[yy]==1) oka=0;
                if(b[xx]==1 || b[yy]==1) okb=0;
                if(oka==0 && okb==0) {
                    puts("NO");
                    goto L1;
                } else if(oka==1 && okb==0) {
                    a[xx]=a[yy]=1;
                } else if(oka==0 && okb==1) {
                    b[xx]=b[yy]=1;
                } else {
                    q.push((node) {xx, yy});
                }
                if(xx==yy) {puts("NO"); goto L1;}
            }
        }
        tot=0;
        stop=q.size();
        while(!q.empty()) {
            int nowx=q.front().x, nowy=q.front().y;
            tot++;
            q.pop();
            int oka=1, okb=1;
            if(a[nowx]==1 || a[nowy]==1) oka=0;
            if(b[nowx]==1 || b[nowy]==1) okb=0;
            if(oka==0 && okb==0) {
                puts("NO");
                goto L1;
            } else if(oka==1 && okb==0) {
                a[nowx]=a[nowy]=1;
            } else if(oka==0 && okb==1) {
                b[nowx]=b[nowy]=1;
            } else {
                if(tot<=stop) q.push((node) {nowx, nowy});
                else a[nowx]=a[nowy]=1;
            }
        }
        puts("YES");
        L1:;
    }
}