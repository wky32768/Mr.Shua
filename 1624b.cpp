#include <bits/stdc++.h>
using namespace std;
int t,a,b,c;
signed main() {
    cin>>t;
    while(t--) {
        cin>>a>>b>>c;
        int aa=b-(c-b);
        int bb=(a+c)/2;
        int cc=b+(b-a);
        if(aa>0 && aa%a==0) {puts("YES"); goto L1;}
        if(bb>0 && (a+c)%2==0 && bb%b==0) {puts("YES"); goto L1;}
        if(cc>0 && cc%c==0) {puts("YES"); goto L1;}
        puts("NO");
        L1:; 
    }
}
