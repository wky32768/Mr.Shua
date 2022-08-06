#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=200005;
int t, n, lleft, rright, last_left, first_right;
char ch[N];
vector <int> v;
bool check() {
    int now=0;
    For(i,1,n)  {
        if(ch[i]=='(') now++;
        else if(ch[i]==')') {
            now--;
            if(now<0) return false;
        }
    }
    return true;
}
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s", ch+1);
        n=strlen(ch+1);
        int now=0, tot_mark=0, ok=1;
        v.clear();
        For(i,1,n) {
            if(ch[i]=='(') now++;
            else if(ch[i]==')') {
                now--;
                if(now<0) {ok=0; goto L1;}
            } else if(ch[i]=='?') {
                tot_mark++;
                now++;
                v.push_back(i);
            }
        }
        if(now%2) {ok=0; goto L1;}
        if(now-tot_mark*2>0) {ok=0; goto L1;}
        if(tot_mark<=1) {ok=1; goto L1;}
        if(now-tot_mark*2==0 || now==0) {ok=1; goto L1;}
        rright=now/2; lleft=tot_mark-rright;
        last_left=v[lleft-1]; first_right=v[lleft];
        For(i,0,lleft-1) ch[v[i]]='(';
        For(i,lleft,v.size()-1) ch[v[i]]=')';
        if(check()==0) {ok=0; goto L1;}
//        cout<<"Debug "<<last_left<<" "<<first_right<<'\n'; 
        ch[last_left]=')'; ch[first_right]='(';
        if(check()==1) {ok=0; goto L1;}
        L1:;
        puts(ok?"YES":"NO");
    }
    return 0;
}
