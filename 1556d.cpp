//a+b=a&b+a|b;
#include <bits/stdc++.h>
using namespace std;
const int N=100005;
int n,k,ans[N],a,b,c[N];
void search(int x) {
    int a,b;
    cout<<"and 1 "<<x<<'\n'; cin>>a;
    cout<<"or 1 "<<x<<'\n'; cin>>b;
    ans[x]=a+b;
    return;
}
signed main() {
    cin>>n>>k;
    for(int i=2;i<=n;i++) search(i);
    cout<<"and 2 3"<<'\n'; cin>>a;
    cout<<"or 2 3"<<'\n'; cin>>b;
    c[1]=(ans[2]+ans[3]-a-b)/2;
    for(int i=2;i<=n;i++) c[i]=ans[i]-c[1];
    sort(c+1,c+n+1);
    cout<<"finish "<<c[k];
    return 0;
}