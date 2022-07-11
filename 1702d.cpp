#include <bits/stdc++.h>
#define int long long
#define For(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int t, k;
char ch[200005];
struct node {
    int num, id;
    friend bool operator < (node a, node b) {
        if(a.num!=b.num) return a.num < b.num;
        return a.id < b.id;
    }
} a[200005];
struct nodee {
    int num, id;
    friend bool operator < (nodee a, nodee b) {
        return a.id < b.id;
    }
} ans[200005];
signed main() {
    cin>>t;
    while(t--) {
        scanf("%s", ch+1);
        int n=strlen(ch+1);
        cin>>k;
        For(i,1,n) {
            a[i]=(node) {ch[i]-'a'+1, i};
        }
        sort(a+1, a+n+1);
        int now=1, tot=0;
        while(tot+a[now].num<=k && now<=n) {
            tot+=a[now].num; now++;
        }
        now--;
        For(i,1,now) ans[i]=(nodee) {a[i].num, a[i].id};
        sort(ans+1, ans+now+1);
        For(i,1,now) printf("%c", ans[i].num-1+'a');
        puts("");
    }
    return 0;
}