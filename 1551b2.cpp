#include <bits/stdc++.h>
using namespace std;
int t,n,k,x,cnt[300005],ans[300005];
vector <pair<int,int> > v;
signed main() {
    cin>>t;
    while(t--) {
        v.clear();
        memset(ans,0,sizeof ans);
        memset(cnt,0,sizeof cnt);
        cin>>n>>k;
        for(int i=1;i<=n;i++) {
            cin>>x;
            cnt[x]++;
            if(cnt[x]<=k) v.push_back(make_pair(x,i));
        }
        sort(v.begin(),v.end());
        for(int i=1;i<=int(v.size()/k)*k;i++) {
//            cout<<v[i-1].first<<" "<<v[i-1].second<<'\n';
            ans[v[i-1].second]=(i-1)%k+1;
        }
        for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
        puts("");
    }
} 
