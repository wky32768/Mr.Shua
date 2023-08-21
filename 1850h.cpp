#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 400005;
int t, n, m, a, b, c;
int cnt, head[N], val[N], vis[N];
bool ok;
struct node {
    int next, to, w;
} sxd[N];
void add(int u, int v, int w) {
    sxd[++cnt].next = head[u];
    sxd[cnt].to = v;
    sxd[cnt].w = w;
    head[u] = cnt;
}
void dfs(int u) {
    vis[u] = 1;
    for(int i = head[u]; i; i = sxd[i].next) {
        int v = sxd[i].to;
        if(vis[v]) {
            if(val[v] - val[u] != sxd[i].w) {
                ok = 0;
                return;
            }
        } else {
            val[v] = val[u] + sxd[i].w;
            dfs(v);
        }
    }
    return;
}
signed main() {
    cin >> t;
    while(t--) {
        cin >> n >> m;
        cnt = 0;
        memset(head, 0, sizeof(head));
        For(i, 1, m) {
            cin >> a >> b >> c;
            add(a, b, c); add(b, a, -c);
        }
        memset(vis, 0, sizeof(vis));
        memset(val, 0, sizeof val);
        ok = 1;
        For(i, 1, n) if(!vis[i]) {
            val[i] = 1;
            dfs(i);
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}