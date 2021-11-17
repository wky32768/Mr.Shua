#include <bits/stdc++.h>
using namespace std;
const int N=1000005;
int t,n,m;
char ch[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        scanf("%s",ch+1);
        int nn=strlen(ch+1);
        int l=0,r=0,u=0,d=0,nowx=0,nowy=0,lastx=1,lasty=1;
        bool boom=0;
        for(int i=1;i<=nn;i++) {
            if(ch[i]=='L') {nowx--;l=min(l,nowx);}
            if(ch[i]=='R') {nowx++;r=max(r,nowx);}
            if(ch[i]=='D') {nowy--;d=min(d,nowy);}
            if(ch[i]=='U') {nowy++;u=max(u,nowy);}
            // cout<<"debug "<<r-l<<" "<<u-d
            if(r-l+1>m || u-d+1>n) {boom=1;break;}
            lastx=1+u,lasty=1-l;
        }
        if(boom==1) {
            // puts("haha");
            cout<<lastx<<" "<<lasty<<'\n';
            goto L1;
        }
        // cout<<"debug "<<nowx<<" "<<nowy<<'\n';
        // cout<<"debug "<<l<<" "<<r<<" "<<d<<" "<<u<<'\n';
        if(nowx>=0 && nowy>=0) {
            if(n+d>=1 && n+d<=n && 1-l>=1 && 1-l<=m) {
                cout<<n+d<<" "<<1-l<<'\n';
                goto L1;
            }
        }
        if(nowx<=0 && nowy<=0) {
            // cout<<"haha "<<1-u<<" "<<m-r<<'\n';
            if(1+u>=1 && 1+u<=n && m-r>=1 && m-r<=m) {
                // cout<<"debug\n";
                cout<<1+u<<" "<<m-r<<'\n';
                goto L1;
            }
        }
        if(nowx>=0 && nowy<=0) {
            if(1+u>=1 && 1+u<=n && 1-l>=1 && 1-l<=m) {
                cout<<1+u<<" "<<1-l<<'\n';
                goto L1;
            }
        }
        if(nowx<=0 && nowy>=0) {
            if(n+d>=1 && n+d<=n && m-r>=1 && m-r<=m) {
                cout<<n+d<<" "<<m-r<<'\n';
                goto L1;
            }
        }
        cout<<"damn"<<n<<"_"<<m<<"_"<<ch+1;
        L1:;
    }
    return 0;
}