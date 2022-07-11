#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=500005;
int t, n, a[N], qian[N][2], hou[N][2];//0:min 1:max
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        For(i,1,n) cin>>a[i];
        qian[1][0]=qian[1][1]=a[1];
        For(i,2,n) {
            qian[i][0]=min(qian[i-1][0], a[i]);
            qian[i][1]=max(qian[i-1][1], a[i]);
        }
        hou[n][0]=hou[n][1]=a[n];
        for(int i=n-1;i>=1;i--) {
            hou[i][0]=min(hou[i+1][0], a[i]);
            hou[i][1]=max(hou[i+1][1], a[i]);
        }
        int mid=0, cnt=0, last, cur=0;
        For(i,1,n) if(a[i]==n) {mid=i; break;}
        last=mid;
        for(int i=mid-1;i>=1;i--)
            if(a[i]==qian[last-1][cur]) {
                cnt++; last=i; cur^=1;
            }
        last=mid; cur=0;
        for(int i=mid+1;i<=n;i++)
            if(a[i]==hou[last+1][cur]) {
                cnt++; last=i; cur^=1;
            }
        cout<<cnt<<endl;
    }
    return 0;
}