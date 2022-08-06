#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++) 
using namespace std;
const int N=55;
int t, n, m;
char a[N], b[N];
signed main() {
    cin>>t;
    while(t--) {
        cin>>n>>m;
        scanf("%s", a+1);
        scanf("%s", b+1);
        int n1=strlen(a+1), n2=strlen(b+1);
        int ok=1, now1=n1, now2=n2;
        while(now2>=2) {
            if(a[now1]==b[now2]) {
                now1--; now2--;
            } else {
                ok=0; break;
            }
        }
        int find=0;
        For(i,1,now1) if(a[i]==b[1]) {find=1; break;}
        if(ok && find) puts("YES");
        else puts("NO");
    }
    return 0;
}