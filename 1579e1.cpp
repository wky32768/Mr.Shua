#include <bits/stdc++.h>
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
const int N=400005;
int t,n,a[N];
deque <int> q;
signed main() {
    cin>>t;
    while(t--) {
        cin>>n;
        q.clear();
        For(i,1,n) {
            cin>>a[i];
            int now=*q.begin();
            if(a[i]<now) q.push_front(a[i]);
            else q.push_back(a[i]);
        }
        for(deque <int> :: iterator i=q.begin();i<q.end();i++) cout<<*i<<" ";
        puts("");
    }
    return 0;
}