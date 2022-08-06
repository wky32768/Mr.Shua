#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
#define Rep(i,a,b) for(int i=a;i>=b;i--)
using namespace std;
const int N=400005;
int t, n, a[3][N], b_shun[3][N], b_ni[3][N], mx_shun[3][N], mx_ni[3][N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,2) For(j,1,n) cin>>a[i][j];
        For(i,1,n) b_shun[1][i]=a[1][i]-i;
        Rep(i,n-1,1) b_shun[2][i]=a[2][i]-(n-i);
        For(i,1,n) b_ni[2][i]=a[2][i]-i;
        Rep(i,n-1,1) b_ni[1][i]=a[1][i]-(n-i);

        mx_shun[1][n]=b_shun[1][n];
        Rep(i,n-1,1) mx_shun[1][i]=max(mx_shun[1][i+1], b_shun[1][i]);
        mx_shun[2][n-1]=b_shun[2][n-1];
        Rep(i,n-2,1) mx_shun[2][i]=max(mx_shun[2][i+1], b_shun[2][i]);
        mx_ni[1][n-1]=b_ni[1][n-1];
        Rep(i,n-2,1) mx_ni[1][i]=max(mx_ni[1][i+1], b_ni[1][i]);
        mx_ni[2][n]=b_ni[2][n];
        Rep(i,n-1,1) mx_ni[2][i]=max(mx_ni[2][i+1], b_ni[2][i]);

        int tm=0, nowx=1, nowy=1, finalx=(n%2==1?2:1), finaly=n, ans=0x3f3f3f3f;
        while(nowx!=finalx || nowy!=finaly) {
            if(nowy%2==1) {
                if(nowx==1) {
                    int temp=tm;
                    temp=temp+(n-nowy)+max(0ll, mx_shun[1][nowy+1]-(temp-nowy)+1);
                    temp=max(temp+1, a[2][n]+1);
                    temp=temp+(n-nowy)+max(0ll, mx_shun[2][nowy]-temp+1);
                    ans=min(ans, temp);
                } else {
                    int temp=tm;
                    temp=temp+(n-nowy)+max(0ll, mx_ni[2][nowy+1]-(temp-nowy)+1);
                    temp=max(temp+1, a[1][n]+1);
                    temp=temp+(n-nowy-1)+max(0ll, mx_ni[1][nowy]-temp+1);
                    ans=min(ans, temp);
                }
            } else {
                if(nowx==1) {
                    int temp=tm;
                    temp=temp+(n-nowy)+max(0ll, mx_shun[1][nowy+1]-(temp-nowy)+1);
                    temp=max(temp+1, a[2][n]+1);
                    temp=temp+(n-nowy-1)+max(0ll, mx_shun[2][nowy]-temp+1);
                    ans=min(ans, temp);
                } else {
                    int temp=tm;
                    temp=temp+(n-nowy)+max(0ll, mx_ni[2][nowy+1]-(temp-nowy)+1);
                    temp=max(temp+1, a[1][n]+1);
                    temp=temp+(n-nowy)+max(0ll, mx_ni[1][nowy]-temp+1);
                    ans=min(ans, temp);
                }
            }
            // cout<<"debug "<<nowx<<" "<<nowy<<" "<<tm<<" "<<ans<<'\n';


            int nextx=0, nexty=0;
            if(nowy%2==1) {
                if(nowx==1) {
                    nextx=2; nexty=nowy;
                } else {
                    nextx=2; nexty=nowy+1;
                }
            } else {
                if(nowx==1) {
                    nextx=1; nexty=nowy+1;
                } else {
                    nextx=1; nexty=nowy;
                }
            }
            nowx=nextx; nowy=nexty;
            tm=max(tm+1, a[nextx][nexty]+1);
        }
        cout<<ans<<endl;
    }
    return 0;
}