#include <bits/stdc++.h>
using namespace std;
int tt,n,zero,h,t;
bool flag;
char ch[200005];
signed main() {
    cin>>tt;
    while(tt--) {
        h=t=zero=0;
        scanf("%s",ch+1);
        n=strlen(ch+1);
        for(int i=1;i<=n;i++) {
            if(ch[i]=='0') {zero++; t=i;}
            if(ch[i]=='0' && h==0) h=i;
        }
        if(zero==0) {puts("0");continue;}
        flag=false;
        for(int i=h;i<=t;i++) if(ch[i]!='0') flag=true;
        if(flag==false) puts("1");
        else puts("2");
    }
    return 0;
}