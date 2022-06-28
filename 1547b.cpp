#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=100005;
int t;
char ch[N];
deque <int> q;
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s", ch+1);
        while(!q.empty()) q.pop_front();
        int mx=0;
        For(i,1,strlen(ch+1)) {
            q.push_back(ch[i]-'a');
            mx=max(mx, ch[i]-'a');
        }
        while(!q.empty()) {
            if(q.front()==mx) {
                mx--;
                q.pop_front();
            } else if(q.back()==mx) {
                mx--;
                q.pop_back();
            } else break;
        }
        if(mx!=-1 || !q.empty()) puts("NO");
        else puts("YES");
    } 
    return 0;
}