#include <bits/stdc++.h>
#define int long long
#define For(i, a, b) for(int i = a; i <= b; i++)
using namespace std;
const int N = 200005;
int t, n, a[N], st[N], ed[N];
signed main() {
    cin >> t;
    while(t--) {
        cin >> n;
        For(i, 1, n) cin >> a[i];
        For(i, 1, n) st[i] = st[i - 1] + (a[i] == 1 ? 1 : 0);
        for(int i = n; i >= 1; i--)
            ed[i] = ed[i + 1] + (a[i] == 1 ? 1 : 0);
        int oldans = 0, ans = 0;
        For(i, 1, n) if(a[i] == 0) oldans += st[i];
        // cout << "ans = " << oldans << endl;
        ans = oldans;
        For(i, 1, n) {
            int ans2;
            if(a[i] == 0) {
                ans2 = oldans - st[i - 1] + (n - i) - ed[i + 1];
            } else {
                ans2 = oldans + st[i - 1] - (n - i) + ed[i + 1];
            }
            // cout << "debug " << i << " " << ans2 << endl;
            ans = max(ans, ans2);
        }
        cout << ans << "\n";
        For(i, 1, n) st[i] = ed[i] = 0;
    }
    return 0;
}