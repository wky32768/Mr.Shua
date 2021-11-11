#include <bits/stdc++.h>
using namespace std;
int t,n;
char ch[1005];
bool flag;
signed main() {
    cin>>t;
    while(t--) {
        flag=false;
        cin>>n;
        scanf("%s",ch+1);
        for(int i=1;i<=n-1;i++) 
            if(ch[i]!=ch[i+1]) {
                cout<<i<<" "<<i+1<<'\n';
                flag=true;
                break;
            }
        if(flag==false) cout<<"-1 -1\n";
    }
    return 0;
}