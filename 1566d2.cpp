#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=305;
int t,n,m;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        int ans=0;
		vector <pair<int,int> > a(n*m);
        For(i,0,n*m-1) {
            cin>>a[i].first;
            a[i].second=i;
        }        
        sort(a.begin(),a.end());
        For(i,0,n*m-1) a[i].second*=(-1);
        For(i,1,n) {
            sort(a.begin()+(i-1)*m,a.begin()+i*m);
            For(j,1,m) For(k,1,j) {
                if(a[(i-1)*m+k-1].second>a[(i-1)*m+j-1].second) ans++;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
/*
先用权值排序，然后对照每一排，权值一样时，越先选的，座位要越后。
用好vector等std可以节省很多时间。
*/
