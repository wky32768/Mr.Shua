//25,75,50,00
#include <bits/stdc++.h>
#define int long long
using namespace std;
int t,n,a1,a2,cnt,w[105];
bool flag;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        cnt=0;
        while(n) {w[++cnt]=n%10;n/=10;}
        a1=a2=flag=0;
        for(int i=1;i<=cnt;i++) {
            if(flag==0 && w[i]==0) flag=1;
            else if(flag==1 && (w[i]==5 || w[i]==0)) break;
            else a1++;
        }
        flag=0;
        for(int i=1;i<=cnt;i++) {
            if(flag==0 && w[i]==5) flag=1;
            else if(flag==1 && (w[i]==2 || w[i]==7)) break;
            else a2++;
        }
        cout<<min(a1,a2)<<'\n';
    }
    return 0;
}