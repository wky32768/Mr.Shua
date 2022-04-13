#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n;
int a[N], zeros_at[N], fu[N], two[N], best;
pair <int, int> ans;
void upd(int l, int r) {
    // cerr<<"debug "<<l<<" "<<r<<'\n';
    if((fu[r]-fu[l-1])%2==0) {
        if(two[r]-two[l-1]>best) {
            best=two[r]-two[l-1];
            ans=make_pair(l-1, n-r);
        }
    } else {
        int aa=0, bb=0;
        For(i,l,r) if(a[i]<0) {aa=i; break;}
        for(int i=r;i>=l;i--) if(a[i]<0) {bb=i;break;}
        if(two[r]-two[aa]>best) {
            best=two[r]-two[aa];
            ans=make_pair(aa, n-r);
        }
        if(two[bb-1]-two[l-1]>best) {
            best=two[bb-1]-two[l-1];
            ans=make_pair(l-1, n-bb+1);
        }
    }
}
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];

        int tot_zero=0, tow=0;
        best=0;
        memset(fu, 0, sizeof fu);
        ans=make_pair(n, 0);

        For(i,1,n) {
            if(a[i]==0) zeros_at[++tot_zero]=i;
            fu[i]=fu[i-1]+(a[i]<0?1:0);
            two[i]=two[i-1]+(abs(a[i])==2?1:0);
        }
        if(tot_zero==0) {
            if(fu[n]%2==0) puts("0 0");
            else {
                int aa=0, bb=0;
                For(i,1,n) if(a[i]<0) {aa=i;break;}
                for(int i=n;i>=1;i--) if(a[i]<0) {bb=i;break;}
                if(two[aa]<two[n]-two[bb-1]) cout<<aa<<" 0\n";
                else cout<<"0 "<<n-bb+1<<'\n';
            }
        } else {
            zeros_at[0]=0;
            zeros_at[tot_zero+1]=n+1;
            For(i,1,tot_zero+1) {
                if(zeros_at[i-1]+1<=zeros_at[i]-1) upd(zeros_at[i-1]+1, zeros_at[i]-1);
            }
            cout<<ans.first<<" "<<ans.second<<'\n';
        }
    }
}