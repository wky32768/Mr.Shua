#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t,n,m,x;
vector <vector <int> > a;
int only[N];
bool ok(int x) {
    //只要有一家商店可以满足两个人的需求, 且最大值都符合, 则满足
    For(i,1,m) {
        int ok=0;
        For(j,1,n) if(a[j][i]>=x) {ok=1; break;}
        if(ok==0) return 0;
    }
    //最大值已经符合, 即至少有一家商店能够符合要求
    For(i,1,n) {
        int tot=0;
        For(j,1,m) if(a[i][j]>=x) tot++;
        if(tot>=2) return 1;
    }
    return 0;
}
signed main() {
	cin>>t;
	while(t--) {
		cin>>n>>m;
		a.clear();
		vector <int> temp;
		a.push_back(temp);
		For(i,1,n) {
			temp.clear();
			temp.push_back(0);
			For(j,1,m) {
				cin>>x;
				temp.push_back(x);
			}
			a.push_back(temp);
		}
        int l=1, r=1e9, ans=0;
        while(l<=r) {
            int mid=(l+r)>>1;
            if(ok(mid)==1) {
                ans=mid; l=mid+1;
            } else r=mid-1;
        }
        cout<<ans<<'\n';
	}
	return 0;
}

