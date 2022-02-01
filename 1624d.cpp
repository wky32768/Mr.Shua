#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t,n,k,sum[30];
char ch[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>k;
        scanf("%s",ch+1);
        memset(sum,0,sizeof sum);
        For(i,1,n) sum[ch[i]-'a'+1]++;
        int pr=0,sg=0;
        For(i,1,26) pr+=sum[i]/2,sg+=sum[i]%2;
        // cout<<"Debug pr%sg:"<<pr<<" "<<sg<<'\n';
        if(pr%k==0) cout<<(pr/k)*2+(sg>=k?1:0)<<'\n';
        else cout<<(pr/k)*2+(sg+(pr%k)*2>=k?1:0)<<'\n';
    }
    return 0;
}