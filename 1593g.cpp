#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=1100005;
int t,k,l,r;
int ji[N],ou[N];
char ch[N];
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s",ch+1);
        int n=strlen(ch+1);
        memset(ji,0,sizeof ji);
        memset(ou,0,sizeof ou);
        For(i,1,n) {
            ji[i]=ji[i-1]; ou[i]=ou[i-1];
            if(ch[i]=='(' || ch[i]==')') {
                if(i%2==1) ji[i]++;
                else ou[i]++;
            }
        }
        cin>>k;
        while(k--) {
            cin>>l>>r;
            cout<<abs((ji[r]-ji[l-1])-(ou[r]-ou[l-1]))<<'\n';
        }
    }
    return 0;
}