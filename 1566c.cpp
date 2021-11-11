#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t,n,ans;
int a[N];
char ch1[N],ch2[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        scanf("%s",ch1+1); scanf("%s",ch2+1);
        For(i,1,n) {
            if(ch1[i]-'0'+ch2[i]-'0'==1) a[i]=2;
            else if(ch1[i]-'0'+ch2[i]-'0'==2) a[i]=1;
            else a[i]=0;
        }
        ans=0;
        For(i,1,n) {
            if(a[i]==2) {ans+=2;continue;}
            if(a[i]==0) {
                if(i+1<=n && a[i+1]==1) {ans+=2;i++;}
                else ans++;
            } else {
                int now=i;
                while(i+1<=n && a[i+1]==1) i++;
                if(i==n) {break;}
                else if(a[i+1]==0) {ans+=2;i++;}
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}