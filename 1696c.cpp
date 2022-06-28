#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1000005;
int t, n1, m, n2, cnt1, cnt2;
int a[N], b[N];
vector <pair <int, int> > v1, v2;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n1>>m;
        For(i,1,n1) cin>>a[i];
        cin>>n2;
        For(i,1,n2) cin>>b[i];
        v1.clear(), v2.clear();
        For(i,1,n1) {
            int now=a[i]; while(now%m==0) now/=m;
            if(v1.size() && v1.back().first==now) {
                v1.back().second+=a[i]/now;
            } else {
                v1.push_back(make_pair(now, a[i]/now));
            }
        }
        For(i,1,n2) {
            int now=b[i]; while(now%m==0) now/=m;
            if(v2.size() && v2.back().first==now) {
                v2.back().second+=b[i]/now;
            } else {
                v2.push_back(make_pair(now, b[i]/now));
            }
        }
        bool same=1;
        if(v1.size()!=v2.size()) same=0;
        else {
            For(i,0,v1.size()-1) if(v1[i]!=v2[i]) {same=0; break;}
        }
        puts(same==1?"Yes":"No");
    }
}